#include <iostream>
using std::cout;

#include <string>
using std::string;

#include "lista.h"

// Função para criar um novo nó
No *criarNo(string site, string link) {
  No *novo_no = new No;
  novo_no->site = site;
  novo_no->link = link;
  novo_no->prox = NULL;
  return novo_no;
}

// Função para criar uma lista vazia
Lista *criarLista() {
  Lista *lista = new Lista;
  lista->cabeca = NULL;
  lista->cauda = NULL;
  return lista;
}

// Função para mostrar todos os elementos da lista
void mostrarLista(Lista *lista) {
  cout << "\nImprimindo todos os elementos...\n";
  No *c = lista->cabeca;

  if (c == NULL) {
    cout << "A lista NAO possui elementos!!\n";
  } else {
    while (c) {
      cout << "Site: " << c->site << ", Link: " << c->link << "\n";
      c = c->prox;
    }
    cout << "\n";
  }
}

// Função para verificar se a lista está vazia
bool vazia(Lista *lista) { return (lista->cabeca == NULL); }

// Função para inserir um elemento no início da lista
void inserirInicio(Lista *lista, string site, string link) {
  No *novo_no = criarNo(site, link);

  if (vazia(lista)) {
    lista->cabeca = novo_no;
    lista->cauda = novo_no;
  } else {
    novo_no->prox = lista->cabeca;
    lista->cabeca = novo_no;
  }
}

// Função para inserir um elemento no final da lista
void inserirFinal(Lista *lista, string site, string link) {
  No *novo_no = criarNo(site, link);

  if (vazia(lista)) {
    lista->cabeca = novo_no;
    lista->cauda = novo_no;
  } else {
    lista->cauda->prox = novo_no;
    lista->cauda = novo_no;
  }
}

// Função para retornar o tamanho da lista
int tamanho(Lista *lista) {
  if (vazia(lista))
    return 0;

  No *c = lista->cabeca;
  int tam = 0;

  while (c) {
    c = c->prox;
    tam++;
  }

  return tam;
}

// Função para verificar se um elemento existe na lista
bool existe(Lista *lista, string site) {
  No *c = lista->cabeca;

  while (c) {
    if (c->site == site)
      return true;
    c = c->prox;
  }

  return false;
}

// Função para remover o último elemento da lista
void remover(Lista *lista) {
  if (!vazia(lista)) {
    // Se houver apenas 1 elemento
    if (lista->cabeca->prox == NULL) {
      lista->cabeca = NULL;
    } else if (lista->cabeca->prox->prox == NULL) { // 2 elementos
      lista->cabeca->prox = NULL;
      lista->cauda = lista->cabeca;
    } else { // Mais de 2 elementos
      No *ant_ant = lista->cabeca;
      No *ant = lista->cabeca->prox;
      No *corrente = lista->cabeca->prox->prox;

      while (corrente) {
        No *aux = ant;
        ant = corrente;
        ant_ant = aux;
        corrente = corrente->prox;
      }
      delete ant_ant->prox;   // Libera memória
      ant_ant->prox = NULL;   // Define o próximo como NULL
      lista->cauda = ant_ant; // Atualiza a cauda
    }
  }
}

// Função para buscar o nome do site na lista e mover o nó correspondente para o
// início da lista
void buscarEAtualizar(Lista *lista, string site) {
  if (vazia(lista)) {
    cout << "A lista está vazia. Nenhum elemento para buscar.\n";
    return;
  }

  No *anterior = NULL;
  No *atual = lista->cabeca;

  // Procura o nó com o site correspondente
  while (atual != NULL && atual->site != site) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual == NULL) {
    cout << "O site '" << site << "' não existe na lista.\n";
    return;
  }

  // Move o nó para o início da lista
  if (anterior != NULL) {
    anterior->prox = atual->prox;
    atual->prox = lista->cabeca;
    lista->cabeca = atual;
  }
}

void removerPorNome(Lista *lista, string site) {
  if (vazia(lista)) {
    cout << "A lista está vazia. Nenhum elemento para remover.\n";
    return;
  }

  No *anterior = NULL;
  No *atual = lista->cabeca;

  // Procura o nó com o site correspondente
  while (atual != NULL && atual->site != site) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual == NULL) {
    cout << "O site '" << site << "' não existe na lista.\n";
    return;
  }

  // Remove o nó da lista
  if (anterior != NULL) {
    anterior->prox = atual->prox;
    if (atual == lista->cauda)
      lista->cauda = anterior;
  } else {
    lista->cabeca = atual->prox;
    if (atual == lista->cauda)
      lista->cauda = NULL;
  }

  delete atual;
  cout << "O site '" << site << "' foi removido da lista.\n";
}