#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int f_nacimiento = 0;

  cout << "***************************De que siglo eres?***************************" << endl;
  cout << "ingrese su edad de nacimiento, luego pulse enter" << endl;
  cin >> f_nacimiento;
  if (f_nacimiento >= 2000 && f_nacimiento <= 2099)
  {
    cout << "Eres del siglo 21";
  }
  else if (f_nacimiento < 1999 && f_nacimiento >= 1900)
  {
    cout << "Eres del siglo 20";
  }

  return 0;
}
