typedef struct
{
    int numeroConta;
    double saldoConta;
} contaBancaria;

contaBancaria inicializa(int, double);
void deposito(contaBancaria *, double);
void saque(contaBancaria *, double);
void print(contaBancaria);
