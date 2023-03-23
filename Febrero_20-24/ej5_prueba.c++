#include <iostream>

using namespace std;

int main()
{
  unsigned int year;

  cout << "*************************** YEAR ***************************" << endl;
  cout << "Introdusca un 'Year' cualqueira: ";
  cin >> year;
  int total = year / 4;

  if ((total % 2) == 0)
  {
    cout << "----------------------------------------" << endl;
    cout << "          Tu YEAR es biciesto" << endl;
    cout << "----------------------------------------" << endl;
  }
  else
  {
    cout << "----------------------------------------" << endl;
    cout << "         Tu YEAR no es biciesto" << endl;
    cout << "----------------------------------------" << endl;
  }
}