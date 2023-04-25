#include <iostream>
using std::cout;

#include <string>
using std::string;


void segmentoString(string s, string t)
{
    string maiorCadeia;
    string menorCadeia;
    
    if(s.length() > t.length() == true){maiorCadeia = s; menorCadeia = t;}
    else{maiorCadeia = t; menorCadeia = s;}

    char segmento[maiorCadeia.length()];

    for(int index = 0; index < maiorCadeia.length(); index++)
    {
        if(maiorCadeia[index] == menorCadeia[index])
        {for(int index = 0; index < sizeof(segmento); index++) {
            segmento[index] = maiorCadeia[index];
            }
        }
    }
    cout << segmento;
}

int main()
{
    string s = "jadhahdsajdsa";
    string t = "wyqeruiweqrndaf";

    segmentoString(s, t);

    return 0;
}