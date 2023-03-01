#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  unsigned int n_2;
  unsigned int n_3;
  unsigned int n_4;
  unsigned int n_5;

  cout << "*************************** Promedio de Notas ***************************" << endl;
  cout << "Agregue la nota del curso 1: ";
  cin >> n;

  cout << "Agregue la nota del curso 2: ";
  cin >> n_2;

  cout << "Agregue la nota del curso 3: ";
  cin >> n_3;

  cout << "Agregue la nota del curso 4: ";
  cin >> n_4;

  cout << "Agregue la nota del curso 5: ";
  cin >> n_5;

  int total = n + n_2 + n_3 + n_4 + n_5;
  float promedio = total / 5;

  cout << "Tu promediol es: " << promedio;
  return 0;
}