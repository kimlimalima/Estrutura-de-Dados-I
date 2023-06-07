#ifndef LISTA_H
#define LISTA_H

#include <string>
using std::string;

typedef struct No {
  string site;
  string link;
  struct No *prox;
} No;

typedef struct Lista {
  No *cabeca;
  No *cauda;
} Lista;

No *criarNo(string site, string link);
Lista *criarLista();
void mostrarLista(Lista *lista);
bool vazia(Lista *lista);
void inserirInicio(Lista *lista, string site, string link);
void inserirFinal(Lista *lista, string site, string link);
int tamanho(Lista *lista);
bool existe(Lista *lista, string site);
void remover(Lista *lista);
void buscarEAtualizar(Lista *lista, string site);
void removerPorNome(Lista *lista, string site);

#endif // LISTA_H