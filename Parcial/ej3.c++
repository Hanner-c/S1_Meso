#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "*************************** Semestre ***************************" << endl;
  cout << "Ingrese el semestre al que te inscribiras: ";
  cin >> n;

  if (n > 10)
  {
    cout << "----------------------------------------" << endl;
    cout << "      No compatible " << n << endl;
    cout << "----------------------------------------" << endl;
  }
  else if (n < 1)
  {
    cout << "----------------------------------------" << endl;
    cout << "        No compatible " << n << endl;
    cout << "----------------------------------------" << endl;
  }
  else
  {
    int faltan = 8 - n;
    cout << "----------------------------------------" << endl;
    cout << "Te hacen falta: " << faltan << " semestres para terminar" << endl;
    cout << "----------------------------------------" << endl;
  }
  return 0;
}