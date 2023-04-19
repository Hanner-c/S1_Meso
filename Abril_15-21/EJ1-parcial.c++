#include <iostream>
using namespace std;

int main()
{
  bool bucle = true;
  short opcion = 0;
  unsigned int day, month, year, total;
  int lado_1, lado_2, lado_3, num;

  while (bucle == true)
  {
    system("cls");
    cout << "*************************** Menu Parcial 2 ***************************" << endl;
    cout << "1. Calcular edad por medio de la fecha de nacimiento" << endl;
    cout << "2. Comprovar si un a;o es bisiento" << endl;
    cout << "3. Lados de un triangulo, para comprovar si: el lado de un triángulo no puede ser más grande que la suma de los dos lados restantes." << endl;
    cout << "4. Tabla de multiplicar de un numero par o impar" << endl;
    cout << "Pulse la tecla correspondiente a la opcion que elija. --> ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      cout << endl
           << "----------------------------------------------------------------------" << endl;
      cout << "ingrese su fecha de nacimiento" << endl;
      cout << "Day: ";
      cin >> day;
      cout << "Month: ";
      cin >> month;
      cout << "Year: ";
      cin >> year;
      if (day > 31 || month > 12 || year > 2023)
      {
        cout << "Error, numero fuera del rango";
      }
      else
      {
        total = (2023 - year);
        if (4 < month)
        {
          total = total - 1;
          cout << "Tu edad acutal es: " << total;
        }
        else if (month == 4)
        {
          if (day < 18)
          {
            total = total - 1;
            cout << "Tu edad acutal es: " << total;
          }
          else
          {
            cout << "Tu edad acutal es: " << total;
          }
        }
        else if (4 > month)
        {
          cout << "Tu edad acutal es: " << total;
        }
      }
      break;

    case 2:
      cout << endl
           << "----------------------------------------------------------------------" << endl;
      cout << "Ingrese el 'year', que desee evaluar --> ";
      cin >> year;
      if ((year % 400) == 0)
      {
        if ((year % 4) == 0)
        {
          cout << "El 'year' " << year << ", es bisiesto" << endl;
        }
        else
        {
          cout << "No es biciesto" << endl;
        }
      }
      else if ((year % 4) == 0)
      {
        cout << "El 'year' " << year << ", es bisiesto" << endl;
      }
      else
      {
        cout << "No es biciesto" << endl;
      }
      break;

    case 3:
      cout << endl
           << "----------------------------------------------------------------------" << endl;
      cout << "Ingrese un lado del triangulo --> ";
      cin >> lado_1;
      cout << "Ingrese el segundo lado del triangulo --> ";
      cin >> lado_2;
      cout << "Ingrese el segundo lado del triangulo --> ";
      cin >> lado_3;

      if (lado_1 < (lado_2 + lado_3))
      {
        cout << "Lado 1 cumple con la ley" << endl;
      }
      else
      {
        cout << "Lado 1 no cumple con la ley" << endl;
      }

      if (lado_2 < (lado_1 + lado_3))
      {
        cout << "Lado 2 cumple con la ley" << endl;
      }
      else
      {
        cout << "Lado 2 no cumple con la ley" << endl;
      }

      if (lado_3 < (lado_2 + lado_1))
      {
        cout << "Lado 3 cumple con la ley";
      }
      else
      {
        cout << "Lado 3 no cumple con la ley" << endl;
      }
      break;

    case 4:
      cout << endl
           << "----------------------------------------------------------------------" << endl;
      cout << "Ingrese un numero natural --> ";
      cin >> num;

      if (num < 0)
      {
        cout << "Error, numero negativo" << endl;
      }
      else
      {
        if ((num % 2) == 0)
        {
          cout << "La tabla del " << num << endl;
          for (int i = 0; i <= 20; i++)
          {
            cout << num << " * " << i << " = " << num * i << endl;
          }
        }
        else if ((num % 2) != 0)
        {
          cout << "La tabla del " << num << endl;
          for (int i = 0; i <= 15; i++)
          {
            cout << num << " * " << i << " = " << num * i << endl;
          }
        }
      }
      break;

    default:
      cout << "Opcion no encontrada" << endl;
      break;
    }
    cout << endl
         << "----------------------------------------------------------------------" << endl
         << "Desea volver a ejecutar?" << endl;
    cout << "1 = si, 0 = no ";
    cin >> bucle;
  }

  return 0;
}