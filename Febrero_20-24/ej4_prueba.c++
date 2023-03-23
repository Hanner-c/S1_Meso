#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  unsigned int n_2;
  unsigned int n_3;
  cout << "*************************** Hallando el mayor ***************************" << endl;
  cout << "Agregue un numero natural:";
  cin >> n;

  cout << "Agregue otro numero natural:";
  cin >> n_2;

  cout << "Agregue un tercer numero natural:";
  cin >> n_3;

  if (n > n_2 && n > n_3)
  {
    cout << "----------------------------------------" << endl;
    cout << "        El numero mayor es: " << n << endl;
    cout << "----------------------------------------" << endl;
  }
  if (n_2 > n && n_2 > n_3)
  {
    cout << "----------------------------------------" << endl;
    cout << "        El numero mayor es: " << n_2 << endl;
    cout << "----------------------------------------" << endl;
  }
  if (n_3 > n && n_3 > n_2)
  {
    cout << "----------------------------------------" << endl;
    cout << "        El numero mayor es: " << n_3 << endl;
    cout << "----------------------------------------" << endl;
  }
  return 0;
}