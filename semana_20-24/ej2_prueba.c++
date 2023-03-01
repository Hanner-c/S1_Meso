#include <iostream>

using namespace std;

int main()
{
  unsigned int n;

  cout << "*************************** Tu numero de la suerte ***************************" << endl;
  cout << "Agregue un numero entre el 1 al 10: ";
  cin >> n;

  if (n == 7)
  {
    cout << "----------------------------------------" << endl;
    cout << "        No tienes buena suerte" << endl;
    cout << "----------------------------------------" << endl;
  }
  if (n > 10)
  {
    cout << "----------------------------------------" << endl;
    cout << "          Numero no compatible" << endl;
    cout << "----------------------------------------" << endl;
  }
  else if (n != 7)
  {
    cout << "----------------------------------------" << endl;
    cout << "         Tienes la buena suerte" << endl;
    cout << "----------------------------------------" << endl;
  }
}