#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int cursos = 0;

  cout << "***************************En que semestre estoy?***************************" << endl;
  cout << "Ingrese el numero de cursos que lleva actualmente: " << endl;
  cin >> cursos;
  if (cursos == 5)
  {
    cout << "Estas cursando el primer semetre";
  }
  else if (cursos > 7)
  {
    cout << "No se sabe el semestre";
  }
  else if (cursos < 5)
  {
    cout << "No es correcto, posiblemente no este asignaste bien los cursos";
  }

  return 0;
}
