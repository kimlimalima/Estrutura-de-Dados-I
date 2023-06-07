#ifndef AIRPORT_H
#define AIRPORT_H

#include <string>
using std::string;

typedef struct
{
    string nome;
    int id;
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
void filaEspera(Aviao, FilaDecolagem*);
Aviao decolagemAutorizada(FilaDecolagem*);
void imprime(FilaDecolagem*);
int contarAvioes(FilaDecolagem*);
void listarPrimeiroAviao(FilaDecolagem*);

#endif //AIRPORT_H