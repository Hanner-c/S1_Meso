#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int opcion, semestre;
  float num1, num2;
  cout << "Ingresa el numero del semestren en el que te encuantras: " << endl;
  cin >> opcion;

  if (opcion == 1 || opcion == 3)
    semestre = 1;
  else if (opcion == 5 || opcion == 7)
    semestre = 2;

  switch (semestre)
  {
  case 1:
    char name_1, name_2, lastname_1, lastname_2;
    cout << "Ingrese sus nombres y apellidos, seguido de un enter por cada palabra";
    cout << "primer nombre";
    cin >> name_1;
    cout << "segundo nombre";
    cin >> name_2;
    cout << "primer apellido";
    cin >> lastname_1;
    cout << "segundo apellido";
    cin >> lastname_2;
    cout << "Tu nombre completo es: " << lastname_1 << " " << lastname_2 << " " << name_1 << " " << name_2;
    break;


  case 2:
    char profecion;
    cout << "Ingrese el nombre de su profecion, todo en minuscula.";
    cin >> profecion;
    if (profecion == 'doctor')
    {
      cout << "La abreviatura es: Doc.";
    }
    else if (profecion == 'ingeniero')
    {
      cout << "La abreviatura es: Ing.";
    }
    else if (profecion == 'licenciado')
    {
      cout << "La abreviatura es: Lic.";
    }
    break;


  default:
    cout << ""
            "NO NOS ENCONTRAMOS EN ESE SEMESTRE";
    break;
  }
  return 0;
}
