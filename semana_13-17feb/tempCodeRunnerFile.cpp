#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int edad = 0;

  cout << "***************************CAlCULADOR DE MAYORIA DE EDAD***************************" << endl;
  cout << "Ingrese su edad y pulse enter " << endl;
  cin >> edad;
  if (edad > 18)
  {
    cout << "la persona es mayor de edad";
  }
  else if (edad < 18)
  {
    cout << "la persona es menor de edad de edad, no puede ingresar";
  }

  return 0;
}
