#include <string>

using std::string;


typedef struct{

    string nomeJogador;
    int jogos;
    int gols;
    int assistencias;
    double qualidade;

} jogadorFutebol;

jogadorFutebol inicializar(string, int, int, int);

void atribuiNome(jogadorFutebol *, string);
void atribuiJogos(jogadorFutebol *, int);
void atribuiGol(jogadorFutebol *, int);
void atribuiAssistencias(jogadorFutebol *, int);

string ehBom(int, int, int, double=0.0, string="Ruim");

void print(jogadorFutebol);