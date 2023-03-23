#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num = 0;
  cout << "ingrese numero: " << endl;
  cin >> num;
  float raiz = sqrt(num);

  if (num >= 30 || num < 0)
    cout << "Numero es de la primera opcion" << endl;
  else if ((num % 2) == 1 || raiz == 0)
  {
    cout << "Numero es de la segunda opcion" << endl;
  }
  else if (num == 1)
  {
    cout << "unidad" << endl;
  }
  else if (num == 0)
  {
    cout << "cero" << endl;
  }
  else
  {
    cout << "error";
  }
}

/* int main()
{
  int mes = 0;
  cin >> mes;
  if (mes == 2)
    cout << "mes tiene 28 dias" << endl;
  else if ((mes % 2) == 0)
    cout << "mes tiene 30 dias" << endl;
  else if ((mes % 2) == 1)
    cout << "mes tiene 31 dias" << endl;
  return 0;
} // Hanner.C */

// #include <iostream>
// using namespace std;

// int main()
// {
//   int x;
//   if (x < 0)
//     cout << "x es un numero negativo" << endl;
//   else if (x >= 0 && x <= 100)
//     cout << "x esta entre 0 y 100";
//   else if (x > 100)
//     cout << "mes es mayor a 100";
//   returnmes0;
// } //Hanner.me