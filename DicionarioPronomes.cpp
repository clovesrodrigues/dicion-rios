#include "DICIONARIOS.h"

void CarregarPronomes(Dicionario* d) {
    // --- 1. PESSOAIS (Retos e Oblíquos) ---
    // Retos
    d->mapaPronomes[wxT("eu")]    = { wxT("eu"),    wxT("Pessoal Reto"), wxT("1ª pess. sing.") };
    d->mapaPronomes[wxT("tu")]    = { wxT("tu"),    wxT("Pessoal Reto"), wxT("2ª pess. sing.") };
    d->mapaPronomes[wxT("ele")]   = { wxT("ele"),   wxT("Pessoal Reto"), wxT("3ª pess. sing. masc.") };
    d->mapaPronomes[wxT("ela")]   = { wxT("ela"),   wxT("Pessoal Reto"), wxT("3ª pess. sing. fem.") };
    d->mapaPronomes[wxT("nós")]   = { wxT("nós"),   wxT("Pessoal Reto"), wxT("1ª pess. plur.") };
    d->mapaPronomes[wxT("vós")]   = { wxT("vós"),   wxT("Pessoal Reto"), wxT("2ª pess. plur.") };
    d->mapaPronomes[wxT("eles")]  = { wxT("eles"),  wxT("Pessoal Reto"), wxT("3ª pess. plur. masc.") };
    d->mapaPronomes[wxT("elas")]  = { wxT("elas"),  wxT("Pessoal Reto"), wxT("3ª pess. plur. fem.") };

    // Oblíquos Átonos
    d->mapaPronomes[wxT("me")]    = { wxT("me"),    wxT("Pessoal Oblíquo"), wxT("Átono - 1ª p.s.") };
    d->mapaPronomes[wxT("te")]    = { wxT("te"),    wxT("Pessoal Oblíquo"), wxT("Átono - 2ª p.s.") };
    d->mapaPronomes[wxT("se")]    = { wxT("se"),    wxT("Pessoal Oblíquo"), wxT("Reflexivo - 3ª p.") };
    d->mapaPronomes[wxT("o")]     = { wxT("o"),     wxT("Pessoal Oblíquo"), wxT("Átono - 3ª p.s. masc.") };
    d->mapaPronomes[wxT("a")]     = { wxT("a"),     wxT("Pessoal Oblíquo"), wxT("Átono - 3ª p.s. fem.") };
    d->mapaPronomes[wxT("lhe")]   = { wxT("lhe"),   wxT("Pessoal Oblíquo"), wxT("Átono - 3ª p.s. (objeto indireto)") };
    d->mapaPronomes[wxT("nos")]   = { wxT("nos"),   wxT("Pessoal Oblíquo"), wxT("Átono - 1ª p.p.") };
    d->mapaPronomes[wxT("vos")]   = { wxT("vos"),   wxT("Pessoal Oblíquo"), wxT("Átono - 2ª p.p.") };
    d->mapaPronomes[wxT("os")]    = { wxT("os"),    wxT("Pessoal Oblíquo"), wxT("Átono - 3ª p.p. masc.") };
    d->mapaPronomes[wxT("as")]    = { wxT("as"),    wxT("Pessoal Oblíquo"), wxT("Átono - 3ª p.p. fem.") };
    d->mapaPronomes[wxT("lhes")]  = { wxT("lhes"),  wxT("Pessoal Oblíquo"), wxT("Átono - 3ª p.p.") };

    // Oblíquos Tônicos
    d->mapaPronomes[wxT("mim")]      = { wxT("mim"),      wxT("Pessoal Oblíquo"), wxT("Tônico - 1ª p.s.") };
    d->mapaPronomes[wxT("comigo")]   = { wxT("comigo"),   wxT("Pessoal Oblíquo"), wxT("Comitativo - 1ª p.s.") };
    d->mapaPronomes[wxT("ti")]       = { wxT("ti"),       wxT("Pessoal Oblíquo"), wxT("Tônico - 2ª p.s.") };
    d->mapaPronomes[wxT("contigo")]  = { wxT("contigo"),  wxT("Pessoal Oblíquo"), wxT("Comitativo - 2ª p.s.") };
    d->mapaPronomes[wxT("si")]       = { wxT("si"),       wxT("Pessoal Oblíquo"), wxT("Tônico Reflexivo - 3ª p.") };
    d->mapaPronomes[wxT("consigo")]  = { wxT("consigo"),  wxT("Pessoal Oblíquo"), wxT("Comitativo Reflexivo - 3ª p.") };
    d->mapaPronomes[wxT("conosco")]  = { wxT("conosco"),  wxT("Pessoal Oblíquo"), wxT("Comitativo - 1ª p.p.") };
    d->mapaPronomes[wxT("convosco")] = { wxT("convosco"), wxT("Pessoal Oblíquo"), wxT("Comitativo - 2ª p.p.") };

    // --- 2. POSSESSIVOS (Todas as variações) ---
    d->mapaPronomes[wxT("meu")]     = { wxT("meu"),     wxT("Possessivo"), wxT("1ª p.s. masc. sing.") };
    d->mapaPronomes[wxT("minha")]   = { wxT("minha"),   wxT("Possessivo"), wxT("1ª p.s. fem. sing.") };
    d->mapaPronomes[wxT("meus")]    = { wxT("meus"),    wxT("Possessivo"), wxT("1ª p.s. masc. plur.") };
    d->mapaPronomes[wxT("minhas")]  = { wxT("minhas"),  wxT("Possessivo"), wxT("1ª p.s. fem. plur.") };
    d->mapaPronomes[wxT("teu")]     = { wxT("teu"),     wxT("Possessivo"), wxT("2ª p.s. masc. sing.") };
    d->mapaPronomes[wxT("tua")]     = { wxT("tua"),     wxT("Possessivo"), wxT("2ª p.s. fem. sing.") };
    d->mapaPronomes[wxT("seu")]     = { wxT("seu"),     wxT("Possessivo"), wxT("3ª p.s. masc. sing.") };
    d->mapaPronomes[wxT("sua")]     = { wxT("sua"),     wxT("Possessivo"), wxT("3ª p.s. fem. sing.") };
    d->mapaPronomes[wxT("nosso")]   = { wxT("nosso"),   wxT("Possessivo"), wxT("1ª p.p. masc. sing.") };
    d->mapaPronomes[wxT("nossa")]   = { wxT("nossa"),   wxT("Possessivo"), wxT("1ª p.p. fem. sing.") };
    d->mapaPronomes[wxT("vosso")]   = { wxT("vosso"),   wxT("Possessivo"), wxT("2ª p.p. masc. sing.") };
    d->mapaPronomes[wxT("vossa")]   = { wxT("vossa"),   wxT("Possessivo"), wxT("2ª p.p. fem. sing.") };

    // --- 3. DEMONSTRATIVOS ---
    d->mapaPronomes[wxT("este")]    = { wxT("este"),    wxT("Demonstrativo"), wxT("Masc. sing. (perto do falante)") };
    d->mapaPronomes[wxT("esta")]    = { wxT("esta"),    wxT("Demonstrativo"), wxT("Fem. sing. (perto do falante)") };
    d->mapaPronomes[wxT("isto")]    = { wxT("isto"),    wxT("Demonstrativo Neutro"), wxT("Perto do falante") };
    d->mapaPronomes[wxT("esse")]    = { wxT("esse"),    wxT("Demonstrativo"), wxT("Masc. sing. (perto do ouvinte)") };
    d->mapaPronomes[wxT("essa")]    = { wxT("essa"),    wxT("Demonstrativo"), wxT("Fem. sing. (perto do ouvinte)") };
    d->mapaPronomes[wxT("isso")]    = { wxT("isso"),    wxT("Demonstrativo Neutro"), wxT("Perto do ouvinte") };
    d->mapaPronomes[wxT("aquele")]  = { wxT("aquele"),  wxT("Demonstrativo"), wxT("Masc. sing. (distante de ambos)") };
    d->mapaPronomes[wxT("aquela")]  = { wxT("aquela"),  wxT("Demonstrativo"), wxT("Fem. sing. (distante de ambos)") };
    d->mapaPronomes[wxT("aquilo")]  = { wxT("aquilo"),  wxT("Demonstrativo Neutro"), wxT("Distante de ambos") };
    d->mapaPronomes[wxT("mesmo")]   = { wxT("mesmo"),   wxT("Demonstrativo"), wxT("Identidade/Reforço") };
    d->mapaPronomes[wxT("próprio")] = { wxT("próprio"), wxT("Demonstrativo"), wxT("Identidade/Reforço") };

    // --- 4. INDEFINIDOS ---
    d->mapaPronomes[wxT("algum")]   = { wxT("algum"),   wxT("Indefinido"), wxT("Variável - Masc. sing.") };
    d->mapaPronomes[wxT("alguma")]  = { wxT("alguma"),  wxT("Indefinido"), wxT("Variável - Fem. sing.") };
    d->mapaPronomes[wxT("alguém")]  = { wxT("alguém"),  wxT("Indefinido"), wxT("Invariável - Pessoa") };
    d->mapaPronomes[wxT("nenhum")]  = { wxT("nenhum"),  wxT("Indefinido"), wxT("Variável - Masc. sing.") };
    d->mapaPronomes[wxT("ninguém")] = { wxT("ninguém"), wxT("Indefinido"), wxT("Invariável - Pessoa") };
    d->mapaPronomes[wxT("tudo")]    = { wxT("tudo"),    wxT("Indefinido"), wxT("Invariável - Coisa") };
    d->mapaPronomes[wxT("nada")]    = { wxT("nada"),    wxT("Indefinido"), wxT("Invariável - Coisa") };
    d->mapaPronomes[wxT("cada")]    = { wxT("cada"),    wxT("Indefinido"), wxT("Invariável") };
    d->mapaPronomes[wxT("outro")]   = { wxT("outro"),   wxT("Indefinido"), wxT("Variável") };
    d->mapaPronomes[wxT("muito")]   = { wxT("muito"),   wxT("Indefinido/Advérbio"), wxT("Intensidade/Quantidade") };
    d->mapaPronomes[wxT("pouco")]   = { wxT("pouco"),   wxT("Indefinido/Advérbio"), wxT("Intensidade/Quantidade") };

    // --- 5. RELATIVOS ---
    d->mapaPronomes[wxT("que")]     = { wxT("que"),     wxT("Relativo"), wxT("Invariável (Universal)") };
    d->mapaPronomes[wxT("quem")]    = { wxT("quem"),    wxT("Relativo/Interrogativo"), wxT("Pessoa") };
    d->mapaPronomes[wxT("onde")]    = { wxT("onde"),    wxT("Relativo/Interrogativo"), wxT("Lugar") };
    d->mapaPronomes[wxT("cujo")]    = { wxT("cujo"),    wxT("Relativo"), wxT("Possessivo (Variável)") };
    d->mapaPronomes[wxT("cuja")]    = { wxT("cuja"),    wxT("Relativo"), wxT("Possessivo (Variável)") };
    d->mapaPronomes[wxT("qual")]    = { wxT("qual"),    wxT("Relativo/Interrogativo"), wxT("Variável") };

    // --- 6. TRATAMENTO (Ajustado) ---
    d->mapaPronomes[wxT("você")]             = { wxT("você"),             wxT("Tratamento"), wxT("Familiar") };
    d->mapaPronomes[wxT("senhor")]           = { wxT("senhor"),           wxT("Tratamento"), wxT("Respeitoso") };
    d->mapaPronomes[wxT("senhora")]          = { wxT("senhora"),          wxT("Tratamento"), wxT("Respeitoso") };
    d->mapaPronomes[wxT("Vossa Excelência")] = { wxT("Vossa Excelência"), wxT("Tratamento"), wxT("Altas Autoridades") };
    d->mapaPronomes[wxT("Vossa Majestade")]  = { wxT("Vossa Majestade"),  wxT("Tratamento"), wxT("Reis e Imperadores") };
    d->mapaPronomes[wxT("Vossa Santidade")]  = { wxT("Vossa Santidade"),  wxT("Tratamento"), wxT("Papa") };
      d->mapaPronomes[wxT("V.Exa.")] = { wxT("V.Exa."), wxT("Pronomes de tratamento"), wxT("singular") };
    d->mapaPronomes[wxT("V.Sa.")] = { wxT("V.Sa."), wxT("Pronomes de tratamento"), wxT("singular") };
    d->mapaPronomes[wxT("V.Maj.")] = { wxT("V.Maj."), wxT("Pronomes de tratamento"), wxT("singular") };
    d->mapaPronomes[wxT("V.Exas.")] = { wxT("V.Exas."), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("V.Sas.")] = { wxT("V.Sas."), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("Vossas Excelências")] = { wxT("Vossas Excelências"), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("Vossas Senhorias")] = { wxT("Vossas Senhorias"), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("V.Exa.")] = { wxT("V.Exa."), wxT("Pronomes de tratamento"), wxT("singular") };
    d->mapaPronomes[wxT("V.Sa.")] = { wxT("V.Sa."), wxT("Pronomes de tratamento"), wxT("singular") };
    d->mapaPronomes[wxT("V.Maj.")] = { wxT("V.Maj."), wxT("Pronomes de tratamento"), wxT("singular") };
    d->mapaPronomes[wxT("V.Exas.")] = { wxT("V.Exas."), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("V.Sas.")] = { wxT("V.Sas."), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("Vossas Excelências")] = { wxT("Vossas Excelências"), wxT("Pronomes de tratamento"), wxT("plural") };
    d->mapaPronomes[wxT("Vossas Senhorias")] = { wxT("Vossas Senhorias"), wxT("Pronomes de tratamento"), wxT("plural") };
}
