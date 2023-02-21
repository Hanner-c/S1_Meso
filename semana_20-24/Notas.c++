#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  short curso1;
  short curso2;
  short curso3;

  cout << "*************************** CURSOS ***************************" << endl;
  cout << "Ingrese el punteo de cada curso: " << endl;
  cout << "Nota de matematica I: " << endl;
  cin >> curso1;
  cout << "Nota de programacion I: " << endl;
  cin >> curso2;
  cout << "Nota de estructuras logicas: " << endl;
  cin >> curso3;
  if (curso1 > 60)
  {
    if (curso2 > 60)
    {
      if (curso3 > 60)
      {
        cout << "Gano todos los cursos";
      }
      else if (curso3 < 60)
      {
        cout << "perdio cursos, por estructuras logicas";
      }
    }
    else if (curso2 < 60)
    {
      cout << "perdio cursos, por programacion";
    }

    else if (curso1 < 60)
    {
      cout << "Perdio cursos, por matematica";
    }
    }
    return 0;
  }