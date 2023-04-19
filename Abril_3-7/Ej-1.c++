/* El riesgo de que una persona sufra enfermedades coronarias depende de
su edad y su índice de masa corporal. Ingresar la edad y el índice de masa
corporal para cumplir las siguientes condiciones.
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  short edad;
  float masa;
  cout << "EDAD = ";
  cin >> edad;

  cout << "MASA = ";
  cin >> masa;

  if (edad < 45 && masa < 22.00)
  {
    cout << "bajo" << endl;
  }
  else if (edad < 45 && masa >= 22.00)
  {
    cout << "medio" << endl;
  }
  else if (edad >= 45 && masa < 22.00)
  {
    cout << "medio" << endl;
  }
  else if (edad >= 45 && masa >= 22.00)
  {
    cout << "alto" << endl;
  }
}