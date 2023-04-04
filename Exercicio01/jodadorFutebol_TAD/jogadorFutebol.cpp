#include <iostream>
#include <string>

using std::cout, std::string;

#include "jogadorFutebol.h"

jogadorFutebol inicializar(string nomeJogador, int jogos, int gols, int assistencias)
{
    jogadorFutebol jogador;
    jogador.nomeJogador = nomeJogador;
    jogador.jogos = jogos;
    jogador.gols = gols;
    jogador.assistencias = assistencias;

    return jogador;

}

void atribuiNome(jogadorFutebol *jogador, string nomeJogador)
{
    jogador->nomeJogador += nomeJogador;
}

void atribuiJogos(jogadorFutebol *jogador, int jogos)
{
    jogador->jogos += jogos;
}

void atribuiGol(jogadorFutebol *jogador, int gols)
{
    jogador->gols += gols;
}

void atribuiAssistencias(jogadorFutebol *jogador, int assistencias)
{
    jogador->assistencias += assistencias;
}

void print(jogadorFutebol jogador)
{
    cout << "Nome: " << jogador.nomeJogador << "\n";
    cout << "Jogos: " << jogador.jogos << "\n";
    cout << "Gols: " << jogador.gols << "\n";
    cout << "Assistencias: " << jogador.assistencias << "\n";
    cout << "Qualidade: " << ehBom(jogador.jogos, jogador.gols,jogador.assistencias) << "\n";
}

string ehBom(int jogos, int gols, int assistencias, double qualidade, string qualidadeJogador)
{
    qualidade = gols + assistencias/jogos;

    if (qualidade > 50.0) return qualidadeJogador="Bom";

    return qualidadeJogador;
}