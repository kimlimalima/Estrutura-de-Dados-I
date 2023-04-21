#include <iostream>
using std::cout;
using std::cin;

#include <string.h>

bool ehVogal(char caractere)
{
    return (caractere == 'a' || caractere == 'e' || caractere =='i' || caractere =='o' || caractere =='u');
}

int main()
{
    char texto[50];
    int quantidadeVogais = 0;
    
    cin.getline(texto, 50);

    for(int index=0; index<strlen(texto); index++)
    {
        if(ehVogal(texto[index]) == true)
        {
            quantidadeVogais ++;
        }
    }
    cout << "Quantidade de vogais: " << quantidadeVogais << "\n";
    return 0;
}
