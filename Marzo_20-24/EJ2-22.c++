#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int num1, num2;
  int total, unida, decena, centena;
  cout << "****************************Problemas con monedas****************************" << endl;
  cout << "ingrese un numero cualquiera: ";
  cin >> num1;
  cout << "ingrese otro numero: ";
  cin >> num2;

  if (num1 == num2)
  {
    cout << "Error, los numeros no puede tener el mismo valor." << endl;
  }
  else
  {
    cout << "**********************************************************" << endl;
    cout << "Tu Factura es de: " << endl;
    if (num1 > num2)
    {
      cout << "Tu dinero es de: " << num1 << endl;
      cout << "tu gasto fue de: " << num2 << endl;
      cout << endl;
      total = num1 - num2;
      cout << "Residuo: " << total;
      cout << "el cambio sera de: ";

      if (total >= 100)
      {
        centena = total / 100;
        total = total % 100;
        cout << centena << " de Q100.00" << endl;
      }
      if (total >= 50)
      {
        decena = total / 50;
        total = total % 50;
        cout << decena << " de Q50.00" << endl;
      }
      if (total >= 20)
      {
        decena = total / 20;
        total = total % 20;
        cout << decena << " de Q20.00" << endl;
      }
      if (total >= 10)
      {
        decena = total / 10;
        total = total % 10;
        cout << decena << " de Q10.00" << endl;
      }
      if (total >= 5)
      {
        decena = total / 5;
        total = total % 5;
        cout << decena << " de Q5.00" << endl;
      }
      if (total >= 1)
      {
        unida = total;
        cout << unida << " de Q1.00" << endl;
      }
    }
    else if (num1 < num2)
    {
      cout << "Tu dinero es de: " << num2 << endl;
      cout << "tu gasto fue de: " << num1 << endl;
      cout << endl;
      total = num2 - num1;
      cout << "Residuo: Q" << total << endl;
      cout << "el cambio sera de: " << endl;

      if (total >= 100)
      {
        centena = total / 100;
        total = total % 100;
        cout << centena << " de Q100.00" << endl;
      }
      if (total >= 50)
      {
        decena = total / 50;
        total = total % 50;
        cout << decena << " de Q50.00" << endl;
      }
      if (total >= 20)
      {
        decena = total / 20;
        total = total % 20;
        cout << decena << " de Q20.00" << endl;
      }
      if (total >= 10)
      {
        decena = total / 10;
        total = total % 10;
        cout << decena << " de Q10.00" << endl;
      }
      if (total >= 5)
      {
        decena = total / 5;
        total = total % 5;
        cout << decena << " de Q5.00" << endl;
      }
      if (total >= 1)
      {
        unida = total;
        cout << unida << " de Q1.00" << endl;
      }
    }
  }
  cout << "Fin del ciclo...." << endl;

  return 0;
}