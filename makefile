SHELL = cmd.exe
CXX = g++
TARGET = DICIONARIOS.dll
IMPLIB = libDICIONARIOS.a 

# 1. DIRETÃ“RIOS
WX_DIR = ./wxWidgets-3.3.2#pasta de INCLUDES do wxWidgets
WX_INC = -I$(WX_DIR)/include -I$(WX_DIR)/lib/gcc_lib/mswu -
WX_LIB_DIR = -L$(WX_DIR)/lib/gcc_lib 

# 2. BIBLIOTECAS 
LIBS =  -lwxmsw33u_core -lwxbase33u \
       -lwxtiff -lwxjpeg -lwxpng -lwxzlib \
       -lshlwapi -lversion -loleacc -luxtheme -lgdiplus -lmsimg32 \
       -lkernel32 -luser32 -lgdi32 -lcomdlg32 -lwinspool -lwinmm \
       -lshell32 -lcomctl32 -lole32 -loleaut32 -luuid -lrpcrt4 -ladvapi32

# 3. FLAGS
CXXFLAGS = -std=c++17 -02 -finput-charset=UTF-8 -fexec-charset=UTF-8 \
           $(WX_INC) #-DBUILDING_DICIONARIO_DLL

SRCS = DICIONARIOS.cpp DicionarioDados.cpp DicionarioDialetico.cpp \
       DicionarioPronomes.cpp DicionarioSinonimos.cpp main.cpp MyProjectBase.cpp
OBJS = $(SRCS:.cpp=.o)

# 4. REGRAS DE COMPILAÃ‡ÃƒO

# Gera a DLL e a biblioteca de importaÃ§Ã£o (.a)
$(TARGET): $(OBJS)
	$(CXX) -shared -o $(TARGET) $(OBJS) $(WX_LIB_DIR) $(LIBS) -Wl,--out-implib,$(IMPLIB)

# Compila cada arquivo .cpp em .o individualmente (CompilaÃ§Ã£o Incremental)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
