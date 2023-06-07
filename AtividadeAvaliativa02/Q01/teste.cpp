#include "airport.h"
#include <iostream>
using std::cout;

typedef struct
{
    int chave;
} Aviao;

typedef struct Celula
{
    Aviao aviao;
    Celula* prox;
} Celula;

typedef struct
{
    Celula* frente;
    Celula* tras;
} FilaDecolagem;

FilaDecolagem* inicializaFilaDecolagem();
void ffVazia(FilaDecolagem*);
int vazia(FilaDecolagem*);
void enfileira(Aviao, FilaDecolagem*);
Aviao desenfileira(FilaDecolagem*);
void imprime(FilaDecolagem*);

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

void enfileira(Aviao aviao, FilaDecolagem *fila)
{
    fila->tras->prox = (Celula*) malloc(sizeof(Celula));
    fila->tras = fila->tras->prox;
    fila->tras->aviao = aviao;
    fila->tras->prox = NULL;
}

Aviao desenfileira(FilaDecolagem *fila)
{
    if (vazia(fila))
        cout << "Erro: A fila está vazia.\n";
    
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
        cout << "fila vazia." << "\n";
        return;
    }
    
    Celula* celulaAtual = fila->frente;
    while (celulaAtual != NULL)
    {
        cout << "Avião de chave" << celulaAtual->aviao.chave << '\n';
        celulaAtual = celulaAtual->prox;
    }
}

int main()
{
    FilaDecolagem* fila = inicializaFilaDecolagem();

    Aviao aviao1 = { 1 };
    Aviao aviao2 = { 2 };
    Aviao aviao3 = { 3 };

    enfileira(aviao1, fila);
    enfileira(aviao2, fila);
    enfileira(aviao3, fila);

    cout << "Fila de decolagem:\n";
    imprime(fila);

    desenfileira(fila);

    cout << "Após desenfileirar:\n";
    imprime(fila);

    return 0;
}