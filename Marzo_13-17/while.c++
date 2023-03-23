// Carga de computadora
// Ciclo While
#include <iostream>
using namespace std;

int main()
{
  unsigned int porsentaje = 100;
  cout << "Ingrese el porsentaje de la carga de su computador: ";
  cin >> porsentaje;
  while (porsentaje >= 20)
  {
    cout << "Ingrese la carga: ";
    cin >> porsentaje;
  }
  cout << "Nivel de carga muy bajo, conecte su dispositivo";

  return 0;
}
