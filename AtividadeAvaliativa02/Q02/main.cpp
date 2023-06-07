#include <iostream>
using std::cout;

#include "lista.h"
#include "lista.cpp"

int main() {
  Lista *l = criarLista();

  cout << "\n\nTestando se lista está vazia: "
       << "\n\n";

  if (vazia(l))
    cout << "Lista vazia!!\n";
  else
    cout << "Lista NAO vazia!!\n";

  mostrarLista(l);

  cout << "\n\nProcurando site qualquer na lista vazia: "
       << "\n\n";

  if (existe(l, "GitHub"))
    cout << "\nO site 'GitHub' existe na lista!!\n";
  else
    cout << "\nO site 'GitHub' NAO existe na lista!!\n";

  mostrarLista(l);

  cout << "\n\nInserindo sites na lista... "
       << "\n\n";

  inserirFinal(l, "Google", "https://www.google.com");
  inserirFinal(l, "GitHub", "https://www.github.com");
  inserirFinal(l, "Stack Overflow", "https://www.stackoverflow.com");
  inserirFinal(l, "Wikipedia", "https://www.wikipedia.org");

  cout << "\n\nMostrando lista de sites atualizada, antes das alterações: "
       << "\n\n";
  mostrarLista(l);

  cout << "\n\nBuscando site na lista e atualizando a mesma: "
       << "\n\n";
  buscarEAtualizar(l, "GitHub");
  mostrarLista(l);

  cout << "\n\nRemovendo site por nome: "
       << "\n\n";
  removerPorNome(l, "GitHub");
  mostrarLista(l);

  cout << "\n\nMostrando lista atualizada de sites: "
       << "\n\n";
  mostrarLista(l);

  delete l;

  return 0;
}