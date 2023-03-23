#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int salario_mensual = 0;

  cout << "***************************Tu salario es justo?***************************" << endl;
  cout << "ingrese la cantidad de dinero que gana al mes:" << endl;
  cin >> salario_mensual;
  if (salario_mensual >= 2800)
  {
    cout << "Tu salario es el justo";
  }
  else if (salario_mensual < 2800)
  {
    cout << "Tu salario es injusto, salte del trabajo!";
  }

  return 0;
}
