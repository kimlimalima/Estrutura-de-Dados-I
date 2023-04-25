#include <iostream>
#include <string>



void segmentoString(std::string s, std::string t)
{
    std::string maiorCadeia;
    std::string menorCadeia;
    
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
        std::cout << segmento;
    }
}

int main()
{
    std::string s = "jadhahdsajdsa";
    std::string t = "wyqeruiweqrndaf";

    segmentoString(s, t);

    return 0;
}