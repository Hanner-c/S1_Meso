#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  unsigned int hora;
  unsigned int minutos;

  cout << "*************************** HORA ***************************" << endl;
  cout << "Agregue la hora actual: ";
  cin >> hora;

  cout << "Agregue los minutos actuales: ";
  cin >> minutos;

  if (hora <= 24 && minutos <= 60)
  {
    cout << "----------------------------------------" << endl;
    cout << "     La hora completa es: " << hora << ":" << minutos << endl;
    cout << "----------------------------------------" << endl;
  }
  else
  {
    cout << "----------------------------------------" << endl;
    cout << "         numero sale del rango" << endl;
    cout << "----------------------------------------" << endl;
  }

  return 0;
}