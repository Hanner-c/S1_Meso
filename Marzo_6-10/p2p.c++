#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int opcion;
  cout << "----------------MENU--------------" << endl;

  cout << "1. Multiplicacion de tres numeros" << endl;
  cout << "2. Suma, resta, multiplicacion y division de dos numeros" << endl;
  cout << "3. Nombre de usuario" << endl;
  cout << "4. 2 Nombres y 2 Apellidos" << endl;
  cout << "5. Profesion" << endl;
  cin >> opcion;

  switch (opcion)
  {

  case 1:
    float num1, num2, num3;
    float resultado;
    cout << "Ingrese un digito: " << endl;
    cin >> num1;
    cout << "Ingrese 2do digito: " << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3;

    resultado = num1 * num2 * num3;
    cout << "El resultado es: " << resultado;
    break;
  case 2:
    float num1, num2;
    float suma, resta, multiplicacion, divison;
    cout << "Ingrese el primer digito: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo digito: " << endl;
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    divison = num1 / num2;

    cout << "Los resultados son,"
         << "" << suma << "" << resta << "" << multiplicacion << "" << divison;
    break;
  case 3:
    char usuario;
    cout << "Ingrese su nombre de usuario: " << endl;
    cin >> usuario;
    cout << "Su nombre de usuario es: " << usuario;
  case 4:
    string ape1, ape2, nom1, nom2;
    cout << "Ingrese dos nombres: " << endl;
    cin >> ape1, ape2;
    cout << "Ingrese sus dos aepllidos: " << endl;
    cin >> nom1, nom2;

    cout << "" << ape1 << "" << ape2 << "" << nom1 << "" << nom2;
    break;
  case 5:
    string profesion, Doctor, doctor, Ingeniero, ingeniero, licenciado, Licenciado;
    cout << "Ingrese su profesion: " << endl;
    cin >> profesion;

    if (profesion == Doctor && profesion == doctor)
    {
      cout << "Dr.";
    }
    else if (profesion == Ingeniero && profesion == ingeniero)
    {
      cout << "Ing";
    }
    else if (profesion == Licenciado && profesion == licenciado)
    {
      cout << "Lic";
    }

  default:
    cout << "Las opciones no existen: ";
  }

  return 0;
}