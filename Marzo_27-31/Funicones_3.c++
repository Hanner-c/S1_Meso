#include <iostream>
using namespace std;

void mensaje(int opcion)
{
  switch (opcion)
  {
  case 1:
    cout << "*******************************" << endl;
    cout << "Feliz descanso de semana santa" << endl;
    cout << "*******************************" << endl;
    break;

  case 2:
    cout << "*******************************************" << endl;
    cout << "El parcial de programación va a estar fácil" << endl;
    cout << "*******************************************" << endl;
    break;

  case 3:
    cout << "********************************" << endl;
    cout << "Matemáticas es mi curso favorito" << endl;
    cout << "********************************" << endl;
    break;
  case 4:
    cout << "***************************" << endl;
    cout << "Es cansado venir a las 7:30" << endl;
    cout << "***************************" << endl;
    break;
  case 5:
    cout << "***************************" << endl;
    cout << "Siempre cumple con tu tarea" << endl;
    cout << "***************************" << endl;
    break;
  }
}

int main()
{
  unsigned int opcion;
  cout << "*************************** INGRESE UN NUMERO DEL 1 AL 5 ***************************" << endl;
  cout << "Ingrese numero segun opcion: ";
  cin >> opcion;
  cout << endl;
  if (opcion > 4)
  {
    cout << "ERROR, opcion no reconocida" << endl;
  }
  else
  {
    mensaje(opcion);
  }

  return 0;
}