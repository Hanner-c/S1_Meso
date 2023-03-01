#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  float n_2;
  float total;
  float residuo;
  cout << "*************************** Ordenando Numeros ***************************" << endl;
  cout << "Agregue un numero entero ";
  cin >> n;

  cout << "Agregue un numero decimal";
  cin >> n_2;
  if (n > n_2)
  {
    total = n - n_2;

    cout << "----------------------------------------" << endl;
    cout << n << " el numero mayor que " << n_2 << " y el residuo es " << total << endl;
    cout << "----------------------------------------" << endl;
  }
  if (n_2 > n)
  {
    total = n_2 - n;

    cout << "----------------------------------------" << endl;
    cout << n_2 << " el numero mayor que " << n << " y el residuo es " << total << endl;
    cout << "----------------------------------------" << endl;
  }
  return 0;
}