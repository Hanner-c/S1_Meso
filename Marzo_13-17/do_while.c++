// Cepillarse los dientes
// Ciclo Do While 
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  system("cls");
  bool diente = false;
  int valor = 1;
  do
  {
    cout << endl;
    cout << "Es hora de sepillarse" << endl;
    cout << "nos permite acabar con las bacterias y desinfectar la boca," << endl;
    cout << "a la vez que evitaremos la aparición del mal aliento." << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << endl;
    diente = true;

    system("pause");
    if (diente == true)
    {
      cout << "Has comido algo?" << endl;
      cout << "1 = si / 0 = no  ";
      cin >> valor;
      if (valor == 1)
      {
        diente = false;
      }
      if (valor == 0)
      {
        diente = true;
      }
    }

  } while (diente == false);
  cout << "-----------------------------" << endl;
  cout << "Tienes los dientes limpios." << endl;
  cout << "-----------------------------" << endl;
  return 0;
}
