#include "DICIONARIOS.h"

// Inicialização do Singleton estático
Dicionario* Dicionario::Get() {
    static Dicionario instancia;
    return &instancia;
}

Dicionario::Dicionario() {
    nomeDicionario = wxString::FromUTF8("CLOVES RODRIGUES DICIONÁRIO");
}

Dicionario::~Dicionario() {}

void Dicionario::Inicializar() {
    // Evita carregar duas vezes se já houver dados
    if (!mapaGeral.empty()) return;

    CarregarDicionarioGeral(this);
    CarregarSinonimos(this);
    CarregarDialetica(this);
    CarregarPronomes(this);
}

wxString Dicionario::GetDefinicao(wxString termo) {
    wxString t = termo.Lower(); // Normaliza para busca
    if (mapaGeral.count(t)) {
        return mapaGeral[t].definicao;
    }
    return wxT("Termo não encontrado.");
}