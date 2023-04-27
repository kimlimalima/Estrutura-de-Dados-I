#include <iostream>
#include <string>

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
    int SLenght = comprimento(s);
    int TLenght = comprimento(t);
    int quantidade = 0;
    int i = 0;
    
    while (i <= TLenght - SLenght) {
        bool key = true;
        int p = 0;
        
        while (p < SLenght) {
            if (t[i + p] != s[p]) {
                key = false;
                break;
            }
            p++;
        }
        
        if (key == true) {
            quantidade++;
        }
        
        i++;
    }
    
    return quantidade;
}

int main()
{
    char s[] = "abc";
    char t[] = "abcdabcd";
    cout << segmento(s, t) << '\n';
    cout << quantidadeOcorrencias(s,t) << "\n";
}
