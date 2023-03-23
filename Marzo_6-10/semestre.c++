#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int opcion, semestre;
  float num1, num2;
  cout << "Ingresa el numero del semestren en el que te encuantras: " << endl;
  cin >> opcion;

  if (opcion == 1 || opcion == 3) semestre = 1;
  else if (opcion == 5 || opcion == 7) semestre = 2;

  switch (semestre)
  {
  case 1:
    cout << "Area comun";
    break;
  case 2:
    cout << "Area especifica";
    break;
  default:
    cout << """NO NOS ENCONTRAMOS EN ESE SEMESTRE";
    break;
  }
  return 0;
}
