#include "airport.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    FilaDecolagem* fila = inicializaFilaDecolagem();
    ffVazia(fila);

    int op;
    string nomeAviao;
    int idAviao;
    Aviao aviao;

    while(1)
    {
        cout << "1 - Número de aviões aguardando na fila.\n";
        cout << "2 - Autorizar decolagem.\n";
		cout << "3 - Adicionar avião à fila de espera.\n";
		cout << "4 - Listar aviões na fila de espera.\n";
        cout << "5 - Listar as informações do primeiro avião.\n";
		cout << "6 - Sair\n";
		cout << "Escolha uma opção: ";
		cin >> op;
        switch( op )
        {
            case 1:
                if (!contarAvioes(fila))
                {
                    cout << "Não tem aviões aguardando decolagem.\n\n";
                    break;
                }
				cout << "Tem " << contarAvioes(fila) << " avião(es) aguardando decolagem.\n\n";
                break;

            case 2:
                if (vazia(fila))
                {
                    cout << "Erro: A fila está vazia.\n\n";
                    break;
                }
                cout << "A decolagem do avião " << decolagemAutorizada(fila).nome << " foi autorizada.\n\n";
				break;

			case 3:
                cout << "Qual o nome do avião a ser adicionado à fila de espera?\n";
                cin.ignore();
                getline(cin, nomeAviao);
                cout << "Qual o ID do avião?\n";
                cin >> idAviao;
                aviao.nome = nomeAviao;
                aviao.id = idAviao;
                filaEspera(aviao, fila);
                cout << "Avião adicionado à fila de espera.\n\n";
                break;

            case 4:
                cout << "Aviões na fila de espera:\n";
                imprime(fila);
                break;

            case 5:
                cout << "Informações do primeiro avião:\n";
                listarPrimeiroAviao(fila);
                break;

			case 6:
				exit(0);
    	}
    }

    return 0;
}