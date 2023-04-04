#include <string>

using std::string;


typedef struct{

    string nomeJogador;
    int jogos;
    int gols;
    int assistencias;

} jogadorFutebol;

jogadorFutebol inicializar(string, int, int, int);

void atribuiNome(jogadorFutebol *, string);
void atribuiJogos(jogadorFutebol *, int);
void atribuiGol(jogadorFutebol *, int);
void atribuiAssistencias(jogadorFutebol *, int);

void ehBom(int, int, int);

void print(jogadorFutebol);