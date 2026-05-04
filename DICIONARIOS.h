#ifndef DICIONARIOS_H
#define DICIONARIOS_H

#include <wx/wx.h>
#include <vector>
#include <map>
#include <wx/intl.h>

// Lógica de Exportação/Importação para DLL
#ifdef BUILDING_DICIONARIO_DLL
    #define DICIONARIO_API __declspec(dllexport)
#else
    #define DICIONARIO_API __declspec(dllimport)
#endif

// Structs de dados
struct DicionarioGeral { wxString termo; wxString classe; wxString definicao; };
struct Antonimos { wxString termo; wxString antitese; wxString categoria; wxString contexto; };
struct Sinonimo { wxString palavra; wxString sinonimo; };
struct Pronome { wxString pronome; wxString tipo; wxString caso; wxString pessoa; wxString numero; wxString categoria; };

// Classe Principal Exportada
class DICIONARIO_API Dicionario {
public:
    Dicionario();
    ~Dicionario();
    
    wxString nomeDicionario;
    
    // Mapas de dados
    std::map<wxString, DicionarioGeral> mapaGeral;
    std::map<wxString, Antonimos> mapaAntonimos;
    std::map<wxString, std::vector<wxString>> mapaSinonimos;
    std::map<wxString, Pronome> mapaPronomes;

    void Inicializar();
    wxString GetDefinicao(wxString termo);

    // Método estático para facilitar o uso (Singleton ou Instância Única)
    // Isso resolve sua ideia de "classe iniciada nela mesma"
    static Dicionario* Get();
};

// Protótipos das funções de carga (Devem ser exportadas se chamadas de fora, 
// mas se forem só internas da DLL, não precisam da macro)
void CarregarDicionarioGeral(Dicionario* d);
void CarregarSinonimos(Dicionario* d);
void CarregarDialetica(Dicionario* d);
void CarregarPronomes(Dicionario* d);

#endif