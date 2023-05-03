//En cada parte del codigo se describe la parte del problema que se abarca
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int numeros[10];
  // punto 1, asignar valores
  cout << "Llenar de numeros un arreglo de 10 posiciones." << endl;
  cout << "----------------------------------------------" << endl;
  for (int i = 0; i <= 9; i++) // Punto 2, imprimir los numeros
  {
    numeros[i] = i * 5;
    cout << "Es numero de la posicion " << i + 1 << " es: " << numeros[i] << endl;
  }

  // Punto 3
  int num, lista = 0;
  cout << "----------------------------------------------" << endl;
  cout << "crear un arreglo variable" << endl;
  cout << "asigne el rango del vector --> ";
  cin >> num;
  int numero_variable[num];
  cout << "los numeros que acupan cada casia son: " << endl;
  for (int i = 0; i < num; i++)
  {
    lista -= 1;
    numero_variable[i] = lista;
    cout << numero_variable[i] << endl;
  }

  // Ejercicio compuesto, ingresar numeros para sumarlos con ayuda de los array
  int cantidad, total = 0;
  cout << "----------------------------------------------" << endl;
  cout << "¿Cuantos numeros desea ingresar? :";
  cin >> cantidad;
  int suma[cantidad];
  cout << endl
       << "ingrese el valor de cada casilla" << endl;

  for (int i = 0; i < cantidad; i++)
  {
    cout << "ingrese el valor de casilla " << i + 1 << ": ";
    cin >> suma[i];
    total = total + suma[i];
  }
  cout << "Fin de asignacion de valores." << endl;
  cout << endl
       << "Resultado de suma: " << total;

  return 0;
}
