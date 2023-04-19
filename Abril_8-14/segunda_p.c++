#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  short op;
  double CO, CA, H, angulo = 0, anguloA = 0, anguloB = 0, radianes;

  cout << "*************************Calculadora de Angulos y lados*************************" << endl;
  cout << "¿Cual de los siguientes casos se le presentan?" << endl;
  cout << "1. Un lado y un angulo" << endl;
  cout << "2. Almenos dos lados" << endl;
  cout << "Ingrese el numero de la opcion. ---> ";
  cin >> op;
  cout << "********************************************************************************" << endl;
  cout << endl;

  switch (op)
  {
  case 1:
    cout << "Ingrese los datos existentes del triangulo rectangulo, cuando no tenga un dato disponible ponga 0 en su lugar" << endl;
    cout << "angulo: ";
    cin >> angulo;
    cout << "Cateto Opuesto: ";
    cin >> CO;
    radianes = ((angulo * 3.1416) / 180);
    anguloA = angulo;
    anguloB = 3.14159 - (radianes + 1.5708);

    if (CO != 0)
    {
      H = CO / sin(radianes);
      CA = H * cos(radianes);
    }
    else if (CO == 0)
    {
      cout << "Cateto Adyasente: ";
      cin >> CA;
      if (CA == 0)
      {
        cout << "Hipotenusa: ";
        cin >> H;
        CA = H * cos(radianes);
        CO = sin(radianes) * H;
      }
      else
      {
        H = CA / cos(radianes);
        CO = sin(radianes) * H;
      }
    }
    break;
  case 2:
    cout << "Cateto opuesto al angulo: --> ";
    cin >> CO;
    cout << "Cateto adyasente al angulo: --> ";
    cin >> CA;
    cout << "Hipotenusa: --> ";
    cin >> H;

    if (H != 0 && CA != 0)
    {
      CO = sqrt((H * H) - (CA * CA));
      angulo = sinh(CO / H);
      anguloB = 3.1416 - (angulo + 1.5708);
    }
    else if (CO != 0 && H != 0)
    {
      CA = sqrt((H * H) - (CO * CO));
      angulo = sinh(CO / H);
      anguloB = 3.1416 - (angulo + 1.5708);
    }
    else if (CO != 0 && CA != 0)
    {
      H = sqrt((CA * CA) + (CO * CO));
      angulo = sinh(CO / H);
      anguloB = 3.1416 - (angulo + 1.5708);
    }
    anguloA = (angulo * 180) / 3.1416;
    break;
  }
  anguloB = (anguloB * 180) / 3.1416;
  cout << endl;
  cout << "**********************************" << endl;
  cout << "Resultado: " << endl;
  cout << "Cateto adyasente: " << CA << endl;
  cout << "Cateto opuesto: " << CO << endl;
  cout << "Hipotenusa: " << H << endl;
  cout << "C: 90" << endl;
  cout << "A: " << anguloA << endl;
  cout << "B: " << anguloB << endl;
  return 0;
}