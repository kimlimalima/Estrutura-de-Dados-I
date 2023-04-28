#include <iostream>
using std::cout;

int comprimento(char *cadeia)
{
    int tamanho = 0;
    
    for(int index = 0; cadeia[index] != '\0'; index++)
        tamanho++;
    return tamanho;
}

bool segmento(char *s, char *t)
{
    if (comprimento(s) > comprimento(t))
        return false;

    int indexT=0, indexS;
    
    while (t[indexT] != '\0')
    {
        indexS = 0;
        while (s[indexS] != '\0' && t[indexT + indexS] == s[indexS])
        {
            indexS++;
        }
        if (s[indexS] == '\0')
            return true;
        indexT++;
    }

    return false;
}

int quantidadeOcorrencias(char *s, char *t) {
    int quantidade = 0;
    int indexT=0, indexS;

    if (!segmento(s, t))
    {
        cout << s << " não é segmento de " << t << '\n';
        return quantidade;
    }

    while (t[indexT] != '\0')
    {
        indexS = 0;
        while (s[indexS] != '\0' && t[indexT + indexS] == s[indexS])
        {
            indexS++;
        }
        if (s[indexS] == '\0')
            quantidade++;
        indexT++;
    }

    cout << "Número de ocorrencias: ";
    return quantidade;
}

int main()
{
    char s[] = "abc";
    char t[] = "abcdabcd";
    cout << quantidadeOcorrencias(s, t) << "\n";
}
