typedef struct
{
    int numeroReal;
    int numeroImaginario;
} NumeroComplexo;


NumeroComplexo inicializar(int, int);

void print(NumeroComplexo);
void copy(NumeroComplexo*, NumeroComplexo);
NumeroComplexo soma(NumeroComplexo, NumeroComplexo);
int ehReal(NumeroComplexo);