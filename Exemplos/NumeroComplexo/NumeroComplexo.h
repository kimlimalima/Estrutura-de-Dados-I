typedef struct
{
    int numeroReal;
    int numeroImaginario;
} NumeroComplexo;


NumeroComplexo inicializar(int, int);

int print(NumeroComplexo);
int copy(NumeroComplexo*, NumeroComplexo);
NumeroComplexo soma(NumeroComplexo, NumeroComplexo);
int ehReal(NumeroComplexo);