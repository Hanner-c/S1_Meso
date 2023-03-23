// Ejercicio 4, numero y menu.
#include <iostream>
using namespace std;

int main()
{
  cout << "***************************Primer Menu***************************" << endl;
  unsigned int numero = 0;
  char opcion;
  cout << "ingrese un numero natural cualquiera: ";
  cin >> numero;

  if (numero > 2500)
  {
    cout << "ERROR!!";
  }
  else
  {
    cout << "-------------------MENU----------------" << endl;
    cout << "a. Enviar un mensaje: 'Si ingreso al ciclo'" << endl;
    cout << "b. Imprimir la variable ingresada en pantalla" << endl;
    cout << "c. Reducir la variable ingresada hasta que sea 0" << endl;
    cout << "d. Cada vez que sea un numero divisible entre 100, mostrar un mensaje 'el numero es divisible entre 100' " << endl;
    cout << "elija una opcion: ";
    cin >> opcion;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;

    switch (opcion)
    {
    case 'a':
      cout << endl
           << "Si ingreso al ciclo" << endl;
      break;
    case 'b':
      cout << "La variable ingresada es: " << numero;
      break;
    case 'c':
      for (int i = numero; i >= 0; i--)
      {
        cout << i << endl;
        cout << "---------------" << endl;
      }

      break;
    case 'd':
      /*if ((numero % 100) == 0)
      {
        cout << "Numero es divisible dentro de 100" << endl;
      }
      else
      {
        cout << "Numero no divisible dentro de 100" << endl;
      }*/
      while (numero > 0)
      {
        if ((numero % 100) == 0)
        {
          cout << "La variable: " << numero << " es divisible dentro de 100" << endl;
        }
        numero--;
      }

      break;
    default:
      cout << "Opcion incorrecta" << endl;
      break;
    }
  }
  cout << endl
       << "Fin del ciclo";
  return 0;
}