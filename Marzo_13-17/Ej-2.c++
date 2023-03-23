// Ejercicio 2, nota de un curso.
#include <iostream>
using namespace std;

int main()
{
  unsigned int nota;
  cout << "*************************** Notas ***************************" << endl;
  do
  {
    cout << "Ingrese nota de un curso: ";
    cin >> nota;
    if (nota > 100)
    {
      cout << "Nota no compatible" << endl;
    }
  } while (nota > 60);
  cout << "------------------------" << endl;
  cout << "Perdiste el curso" << endl;
  return 0;
}