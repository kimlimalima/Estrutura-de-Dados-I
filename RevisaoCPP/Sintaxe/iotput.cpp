#include <iostream>

using namespace std;
// Imput
string nome;
int idade;
char sexo;
double contaBancaria;
float scoreSerasa;

int main()
{

  // Output
  cout << "Qual teu nome?" << endl;
  cin >> nome;
  getline(cin, nome);

  cout << "Qual tua idade?" << endl;
  cin >> idade;

  cout << "M or F?" << endl;
  cin >> sexo;

  cout << "Triste ou feliz? Quero números, já sabeee." << endl;
  cin >> contaBancaria;

  cout << "Me diga em números, o que tira teu sono: " << endl;
  cin >> scoreSerasa;

  cout << "Nome: " << nome << "." << endl;
  cout << "Idade: " << idade << "." << endl;
  cout << "Sexo: " << sexo << "." << endl;
  cout << "Valor na conta bancária: " << contaBancaria << "." << endl;
  cout << "Score no serasa: " << scoreSerasa << "." << endl;

  return 0;
}