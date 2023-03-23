// letras del abecedario
// Ciclo For
#include <iostream>
using namespace std;

int main()
{
  int abecedario;
  int cantidad, diferencia;
  char letra = '`';

  cout << "Cuantas letras del abecedario desea? ";
  cin >> cantidad;
  diferencia = 27 - cantidad;
  if (cantidad > 27)
  {
    cout << "-----------------------------------" << endl;
    cout << "Solo hay 27 letras en el abecedario" << endl;
    cout << "-----------------------------------" << endl;
  }
  else
  {
    cout << "---------------------------------------------" << endl;
    cout << "las letras son: " << endl;
    for (int i = int(letra); i < (123 - diferencia); i++)
    {
      letra++;
      cout << letra << endl;
    }
    cout << "---------------------------------------------" << endl;
  }

  return 0;
}
