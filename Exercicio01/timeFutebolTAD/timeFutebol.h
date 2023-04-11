#include <string>
using std::string;

typedef struct
{
    string nomeTime;
    string nomeTreinadorTime;
    int vitorias;
    int empates;
    int derrotas;

}timeFutebol;

timeFutebol inicializar(string, string, int, int, int);

void print(timeFutebol);

void setNomeTime(timeFutebol *, string);
void setNomeTreinadorTime(timeFutebol *, string);
void setVitorias(timeFutebol *, int);
void setEmpates(timeFutebol *, int);
void setDerrotas(timeFutebol *, int);