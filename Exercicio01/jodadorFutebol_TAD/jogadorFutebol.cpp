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

void nomeJogador(jogadorFutebol *jogador, string nomeJogador)
{
    jogador->nomeJogador = nomeJogador;
}

void jogos(jogadorFutebol *jogador, int jogos)
{
    jogador->jogos = jogos;
}

void gols(jogadorFutebol *jogador, int gols)
{
    jogador->gols = gols;
}

void assistencias(jogadorFutebol *jogador, int assistencias)
{
    jogador->assistencias = assistencias;
}

void print(jogadorFutebol jogagor)
{
    cout << "Nome: " << jogagor.nomeJogador << "\n";
    cout << "Jogos: " << jogagor.jogos << "\n";
    cout << "Gols: " << jogagor.gols << "\n";
    cout << "Assistencias: " << jogagor.assistencias << "\n";
}