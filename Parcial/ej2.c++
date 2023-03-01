#include <iostream>

using namespace std;

int main()
{
  int n;
  int n_2;
  int n_3;

  cout << "*************************** Ordenado Numeros ***************************" << endl;
  cout << "Valor numero 1: ";
  cin >> n;

  cout << "Valor numero 2: ";
  cin >> n_2;

  cout << "Valor numero 3: ";
  cin >> n_3;

  if (n > n_2 && n > n_3)
  {
    cout << "----------------------------------------" << endl;
    cout << "   El numero mayor es el primero: " << n << endl;
    cout << "----------------------------------------" << endl;
  }
  else if (n_2 > n && n_2 > n_3)
  {
    cout << "----------------------------------------" << endl;
    cout << "   El numero mayor es el segundo: " << n_2 << endl;
    cout << "----------------------------------------" << endl;
  }
  else if (n_3 > n && n_3 > n_2)
  {
    cout << "----------------------------------------" << endl;
    cout << "   El numero mayor es el tercero: " << n_3 << endl;
    cout << "----------------------------------------" << endl;
  }
  return 0;
}