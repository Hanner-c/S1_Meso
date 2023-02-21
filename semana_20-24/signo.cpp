#include <iostream>

using namespace std;

int main()
{
  int numero;

  cout << "*************************** SIGNO ***************************" << endl;
  cout << "Agregue un numero cualcuiera: ";
  cin >> numero;

  if (numero > 0)
  {
    cout << "----------------------------------------" << endl;
    cout << "        El numero es positivo" << endl;
    cout << "----------------------------------------" << endl;
  }
  if (numero < 0)
  {
    cout << "----------------------------------------" << endl;
    cout << "        El numero es negativo" << endl;
    cout << "----------------------------------------" << endl;
  }

  else if (numero == 0)
  {
    cout << "----------------------------------------" << endl;
    cout << "       El numero es igual a cero" << endl;
    cout << "----------------------------------------" << endl;
  }
}
