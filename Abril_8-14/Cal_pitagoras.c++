#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  double CO, CA, H, angulo, anguloCA, anguloCO, anguloH;

  cout << "*************************Calculadora de Angulos y lados*************************" << endl;
  cout << "Ingrese los datos existentes del triangulo rectangulo, cuando no tenga un dato disponible" << endl;
  cout << "ponga 0 en su lugar" << endl
       << endl;
  cout << "Hipotenusa: ";
  cin >> H;
  cout << "Cateto opuesto al angulo: ";
  cin >> CA;
  cout << "Cateto adyasente al angulo: ";
  cin >> CO;
  cout << "Angulo seleccionado: ";
  cin >> angulo;
  cout << endl;
  if (H > 0 && angulo > 0)
  {

    cout << "Cateto opuesto al angulo: ";
    CO = H * sin(angulo);
    cout << "Cateto adyasente al angulo: ";
    CA = H * sin(angulo);
    anguloCA = angulo;
    anguloCO = 180 - (90 + anguloCA);
  }
  else if (H > 0 && CA > 0)
  {
  }
  else if (CA > 0 && CO > 0)
  {
  }
  anguloCO = anguloCO * (180 / 3.1415);

  cout << "Resultado: " << endl;
  cout << "Hipotenusa: " << H << endl;
  cout << "Angulo recto: 90 grados" << endl;
  cout << "a: " << CA << endl;
  cout << "A: " << angulo << endl;
  cout << "b: " << CO << endl;
  cout << "B: " << anguloCO << endl;

  return 0;
}
