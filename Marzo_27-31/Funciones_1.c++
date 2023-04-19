#include <iostream>
#include <cmath>
using namespace std;

//En el codigo de ejemplo se aplico esto de aqui arriba pero no entiendo porque.
int area(int, int);
int potencia(int, int);
float residuo(int, int);

int main()
{
  int num_1, num_2, resultado, opcion;

  cout << "*************************** Calculadora Geometrica y Aritmetica ***************************" << endl;
  cout << "1. Calcular el área de la figura rectángulo" << endl;
  cout << "2. Calcular la potencia del primer número elevado al segundo número" << endl;
  cout << "3. Calcular el residuo del primer número dentro del segundo número" << endl;
  cout << "Pulse la tecla correspondiente a la opcion que elija. ";
  cin >> opcion;
  system("cls");

  cout << "Ingrese primer numero: ";
  cin >> num_1;
  cout << "Ingrese segundo numero: ";
  cin >> num_2;
  cout << endl;
  if (opcion == 1)
  {
    resultado = area(num_1, num_2);
    cout << resultado << " es el area del rectrangulo.";
  }
  if (opcion == 2)
  {
    resultado = potencia(num_1, num_2);
    cout << resultado << " es la potencia del primero por el segundo";
  }
  if (opcion == 3)
  {
    resultado = residuo(num_1, num_2);
    cout << "resultado = " << resultado;
  }

  return 0;
}

int area(int num_1, int num_2)
{
  int total;
  cout << "Calcular el área de la figura rectángulo" << endl;
  total = num_1 * num_2;
  return total;
}
int potencia(int num_1, int num_2)
{
  int total;
  cout << "Calcular la potencia del primer número elevado al segundo número" << endl;
  total = pow(num_1, num_2);
  return total;
}
float residuo(int num_1, int num_2)
{
  float total;
  cout << "Calcular el residuo del primer número dentro del segundo número" << endl;
  total = num_1 % num_2;
  return total;
}