#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  unsigned int n_2;
  int total;

  cout << "*************************** Divicion de dos numeros ***************************" << endl;
  cout << "Agregue un numero natural:";
  cin >> n;

  cout << "Agregue otro numero natural:";
  cin >> n_2;
  total = n / n_2;

  if ((total % 2) == 0)
  {
    cout << "----------------------------------------" << endl;
    cout << "          La division es exacta" << endl;
    cout << "----------------------------------------" << endl;
  }
  else
  {
    cout << "----------------------------------------" << endl;
    cout << "        La división no es exacta" << endl;
    cout << "----------------------------------------" << endl;
  }
}