#include <iostream>
using std::cout;

int comprimento(char *cadeia)
{
    int tamanho = 0;
    
    for(int index = 0; cadeia[index] != '\0'; index++)
        tamanho++;
    return tamanho;
}

int quantidadeVogais(char *cadeiaCaracteres)
{
    int quantidadeVogais = 0;

    for(int index=0; index<comprimento(cadeiaCaracteres); index++)
    {
        char letra = cadeiaCaracteres[index];
        if (letra == 'a' || letra == 'e' || letra =='i' || letra =='o' || letra =='u'){quantidadeVogais++;}
        if (letra == 'A' || letra == 'E' || letra == 'I'|| letra == 'O' || letra == 'U'){quantidadeVogais++;}
    }
    return quantidadeVogais;
}

int main()
{
    char cadeia[] = "KimFantiny";
    cout << "Quantidade de vogais: " << quantidadeVogais(cadeia) << "\n";
    return 0;
}

