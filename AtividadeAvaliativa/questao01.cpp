#include <iostream>
using std::cout;

#include <string>
using std::string;

int quantidadeVogais(string cadeiaCaractere)
{
    int quantidadeVogais = 0;

    for(int index=0; index<cadeiaCaractere.length(); index++)
    {
        char caractere = cadeiaCaractere[index];
        if (caractere == 'a' || caractere == 'e' || caractere =='i' || caractere =='o' || caractere =='u'){quantidadeVogais++;}
        if (caractere == 'A' || caractere == 'E' || caractere == 'I'|| caractere == 'O' || caractere == 'U'){quantidadeVogais++;}
    }
    return quantidadeVogais;
}


int main()
{
    cout << "Quantidade de vogais: " << quantidadeVogais("KimiA") << "\n";
    return 0;
}
