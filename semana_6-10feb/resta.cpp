#include <iostream>
using namespace std;

int main()
{
  int numero_1 = 0;
  int numero_2 = 0;
  int total;
  cout << "***************************RESTA DE DOS NUMEROS***************************" << endl;
  cout << "Intrucciones: ingrese dos numeros para que puedan ser restados y se le indique si el resultado es positivo o negativo" << endl;
  cout << "numero 1: ";
  cin >> numero_1;
  cout << "numero 2: ";
  cin >> numero_2;
  total = numero_1 - numero_2;
  cout << "El resultado es: " << total << endl;
  if (total > 0)
  {
    cout << "El signo del resultado es +";
  }
  else if (total < 0)
  {
    cout << "El signo del resultado es +";
  }
  return 0;
}