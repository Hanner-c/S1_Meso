#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  system("cls");

  int numero = 0;
  char letra;
  int otronumero = 0;
  cout << "----------------------------------------" << endl;
  cout << "     ingrese un numero, por favor" << endl;
  cout << "----------------------------------------" << endl;
  cin >> numero;

  if ((numero % 2) == 0)
  {
    // *es par
    cout << "----------------------------------------" << endl;
    cout << "     ingrese una letra, por favor" << endl;
    cout << "----------------------------------------" << endl;
    cin >> letra;

    cout << "la letra o caracter ingresado es; " << letra;
  }
  else
  {
    cout << "----------------------------------------" << endl;
    cout << "     ingrese un numero, por favor" << endl;
    cout << "----------------------------------------" << endl;
    cin >> otronumero;

    cout << "el numero ingresado es; " << otronumero << endl;
  }

  cout << "programa finalizado XD";
  return 0;
}
