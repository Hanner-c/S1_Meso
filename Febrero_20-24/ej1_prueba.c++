#include <iostream>

using namespace std;

int main()
{
  float gasto;

  cout << "*************************** Gastos Mensuales ***************************" << endl;
  cout << "Introdusca la cantidad de dinero gastada durante todo el mes: -->";
  cin >> gasto;

  if (gasto > 1500)
  {
    cout << "----------------------------------------" << endl;
    cout << "    Su gasto mensual es considerable" << endl;
    cout << "----------------------------------------" << endl;
  }
  if (gasto < 1500)
  {
    cout << "----------------------------------------" << endl;
    cout << "           Su gasto es menor" << endl;
    cout << "----------------------------------------" << endl;
  }

  else if (gasto == 1500)
  {
    cout << "----------------------------------------" << endl;
    cout << "          Su gasto es moderado" << endl;
    cout << "----------------------------------------" << endl;
  }
}