#include <iostream>
using std::cout;

#include <string>
using std::string;


#include "timeFutebol.h"

timeFutebol inicializar(string nomeTime, string nomeTreinadorTime, int vitorias, int empates, int derrotas,int pontosVitorias, int pontosEmpate, int pontosTime)
{
    timeFutebol team;

    team.nomeTime = nomeTime;
    team.nomeTreinadorTime = nomeTreinadorTime;
    team.vitorias = vitorias;
    team.empates = empates;
    team.derrotas = derrotas;
    team.pontosTime = pontosTime;
    team.pontosEmpate = pontosEmpate;
    team.pontosVitorias = pontosVitorias;

    return  team;
}

int totalPontosTime(timeFutebol *team, int vitorias, int empates, int pontosVitorias, int pontosEmpate ,int pontosTime)
{

    while(vitorias>0){pontosTime+=3;}
    while(empates>0){pontosTime+=1;}

    return pontosTime;
}

void setNomeTime(timeFutebol *team, string nomeTime)
{
    team->nomeTime = nomeTime;
}

void setNomeTreinadorTime(timeFutebol *team, string nomeTreinadorTime)
{
    team->nomeTreinadorTime += nomeTreinadorTime;
}

void setVitorias(timeFutebol *team, int vitorias)
{
    team->vitorias += vitorias;
}

void setEmpates(timeFutebol *team, int empates)
{
    team->empates += empates;
}

void setDerrotas(timeFutebol *team, int derrotas)
{
    team->derrotas += derrotas;
}

void print(timeFutebol team)
{
    cout << "Nome Time: " << team.nomeTime << "\n";
    cout << "NomeTreinador Time: " << team.nomeTreinadorTime << "\n";
    cout << "Número de vitórias: " << team.vitorias << "\n";
    cout << "Número de empates: " << team.empates << "\n";
    cout << "Número de derrotas: " << team.derrotas << "\n";
    cout << "Total Pontos: " << team.pontosTime << "\n";
}