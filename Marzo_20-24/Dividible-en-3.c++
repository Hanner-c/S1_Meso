#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int opcion = 0, factores;
  int numero = 0, numero2 = 0, i;
  char n1, n2, n3, n4, n5, n6;
  float resultado;
  cout << "1. Ingresar un número, indicar si es divisible exactamente dentro de 3." << endl;
  cout << "2. Ingresar un número, utilizarlo para crear el rango de un ciclo while, un ciclo do-while y un ciclo for. (Ejemplo en ejercicio de números primos)" << endl;
  cout << "3. Ingresar un nombre de 6 letras, letra por letra, luego imprimirlo todo junto en la pantalla. (Ejemplo, a, r, t, u, r, o. Resultado: arturo)." << endl;
  cout << "4. Ingresar un número. Mostrar todos los números PARES por los que se puede dividir exactamente." << endl;
  cout << "ingrear opcion que quiera: ";
  cin >> opcion;

  switch (opcion)
  {
  case 1:
    cout << "**********************************************************" << endl;
    cout << "ingrese un numero cualquiera: ";
    cin >> opcion;
    resultado = numero / 3;
    if (resultado != 0)
    {
      cout << "numero no divisible dentro de tres, resultado de la operacion es: " << resultado << endl;
    }
    else
    {
      cout << "numero es divisible exactamento dentro de tres, resultado de la operacion: " << resultado << endl;
    }

    break;
  case 2:
    cout << "**********************************************************" << endl;
    cout << "ingrese un numero cualquiera: ";
    cin >> numero;
    cout << endl;
    cout << "los primeros " << numero << " numeros pares hechos con ciclo for son:" << endl;
    for (i = 0; i < numero; i++)
    {
      numero2 = numero2 + 2;
      cout << numero2 << endl;
    }
    cout << "fin de for" << endl;
    cout << "*******************************" << endl;
    i = 0;
    numero2 = 0;
    cout << "Ahora con ciclo while" << endl;
    while (i < numero)
    {
      numero2 = numero2 + 2;
      cout << numero2 << endl;
      i++;
    }
    cout << "fin de while" << endl;
    cout << "*******************************" << endl;
    i = 0;
    numero2 = 0;
    cout << "Ahora con ciclo do while" << endl;
    do
    {
      numero2 = numero2 + 2;
      cout << numero2 << endl;
      i++;
    } while (i < numero);
    cout << "fin de do while" << endl;
    cout << "*******************************" << endl;

    break;
  case 3:
    cout << "**********************************************************" << endl;
    cout << "Ingrese un nombre no mayor a 6 letras, una por una seguida de un espacio " << endl;
    scanf("%C %C %C %C %C %C", &n1, &n2, &n3, &n4, &n5, &n6);
    cout << "nombre completo es: " << n1 << n2 << n3 << n4 << n5 << n6 << endl;

  case 4:
    cout << "**********************************************************" << endl;
    cout << "ingrese un numero cualquiera: ";
    cin >> numero;
    for (i = numero; i > 0; i--)
    {
      if (numero % i == 0)
      {
        factores++;
        cout << i << " es par, y es factor de " << numero << endl;
      }
      else
      {
        cout << i << " es impar" << endl;
      }
    }

    break;

  default:
    break;
  }

  return 0;
}