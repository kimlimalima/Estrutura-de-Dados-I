#include <string>
using std::string;

typedef struct
{
    string nomeTime;
    string nomeTreinadorTime;
    int vitorias;
    int empates;
    int derrotas;
    int pontosTime;
    int pontosVitorias;
    int pontosEmpate;

}timeFutebol;


timeFutebol inicializar(string, string, int, int, int, int, int, int);

void print(timeFutebol);

int totalPontosTime(timeFutebol *, int, int, int, int, int);

void setNomeTime(timeFutebol *, string);
void setNomeTreinadorTime(timeFutebol *, string);
void setVitorias(timeFutebol *, int);
void setEmpates(timeFutebol *, int);
void setDerrotas(timeFutebol *, int);