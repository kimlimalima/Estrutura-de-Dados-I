#include "airport.h"
#include <iostream>
using std::cout;

FilaDecolagem* inicializaFilaDecolagem()
{
  FilaDecolagem* fila = (FilaDecolagem*)malloc(sizeof(FilaDecolagem));
  fila->frente = NULL;
  fila->tras = NULL;
  return fila;
}

void ffVazia(FilaDecolagem *fila)
{
    fila->frente = (Celula*)malloc(sizeof(Celula));
    fila->tras = fila->frente;
    fila->frente->prox = NULL;
}

int vazia(FilaDecolagem *fila)
{
    return(fila->frente == fila->tras); 
}

void filaEspera(Aviao aviao, FilaDecolagem *fila)
{
    fila->tras->prox = (Celula*) malloc(sizeof(Celula));
    fila->tras = fila->tras->prox;
    fila->tras->aviao = aviao;
    fila->tras->prox = NULL;
}

Aviao decolagemAutorizada(FilaDecolagem *fila)
{
    Celula* celulaRemovida = fila->frente;
    Aviao aviaoRemovido = celulaRemovida->aviao;
    fila->frente = fila->frente->prox;

    if (fila->frente == NULL) {
        fila->tras = NULL;
    }

    free(celulaRemovida);
    return aviaoRemovido;
}

void imprime(FilaDecolagem* fila)
{
    if (fila->frente->prox == NULL)
    {
        cout << "fila vazia." << "\n\n";
        return;
    }
    
    Celula* celulaAtual = fila->frente->prox;
    cout << "Aviões aguardando na fila de espera:\n\n";
    while (celulaAtual != NULL)
    {
        cout << "Nome do avião: " << celulaAtual->aviao.nome;
        cout << " ID: " << celulaAtual->aviao.id << '\n';
        celulaAtual = celulaAtual->prox;
    }
    cout << "\n";
}

int contarAvioes(FilaDecolagem* fila)
{
    if (fila->frente->prox == NULL)
        return 0;

    int contador = 0;
    Celula* celulaAtual = fila->frente->prox;

    while (celulaAtual != NULL)
    {
        contador++;
        celulaAtual = celulaAtual->prox;
    }

    return contador;
}

void listarPrimeiroAviao(FilaDecolagem* fila)
{
    if (fila->frente->prox == NULL)
    {
        cout << "Fila vazia.\n\n";
        return;
    }

    Celula* primeiroAviao = fila->frente->prox;
    cout << "Características do primeiro avião:\n";
    cout << "Nome: " << primeiroAviao->aviao.nome;
    cout << " ID: " << primeiroAviao->aviao.id << "\n\n";
}