#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int, int);
void centrar_texto(const char *texto, int y);
void simbolo();

int main()
{
  bool bucle = true;
  system("cls");
  system("color 1f");
  simbolo();

  while (bucle == true)
  {
    system("cls");
    int opcion, opcion2, opcion3, opcion4, opcion5;
    cout << "**************************************************************************************************************" << endl;
    cout << "******************************      Bienvenido al Clarividente del Football     ******************************" << endl;
    cout << "********************                                                                      ********************" << endl;

    //? ****************************************************************************************
    cout << "Tu equipo es de la liga española? s/1 n/0" << endl;
    cin >> opcion;

    if (opcion == 1) // pregunta 1
    {
      system("color 2");
      cout << "Tu equipo es es de la ciudad de Madrid? s/1 n/0" << endl;
      cin >> opcion2;
      if (opcion2 == 1)
      {
        system("color 5f");
        cout << "Tu equipo jugo la champions? s/1 n/0" << endl;
        cin >> opcion3;
        if (opcion3 == 1)
        {
          system("color 1f");
          cout << "Tu equipo es ganador reciente?" << endl;
          cin >> opcion4;
          if (opcion4 == 1)
          {
            cout << "******************** Tu equipo es el Rey de europa, el Gran Real Madrird ********************" << endl;
          }
          else if (opcion4 == 0)
          {
            cout << "********************          Tu equipo es el Atletico de Madrid          ********************" << endl;
          }
        }
        else if (opcion3 == 0)
        {
          cout << "********************          Tu equipo es el Rayo Vallecano          ********************";
        }
      }
      else if (opcion2 == 0)
      {
        cout << "Tu equipo es es de la ciudad de Barcelona? s/1 n/0" << endl;
        cin >> opcion3;
        if (opcion3 == 1)
        {
          cout << "Tu equipo jugo la champions s/1 n/0" << endl;
          cin >> opcion4;
          if (opcion4 == 1)
          {
            cout << "Tu equipo jugo recientemente Europa league s/1 n/0" << endl;
            cin >> opcion5;
            if (opcion5 == 1)
            {
              cout << "********************          Tu equipo es el FC Barcelona          ********************" << endl;
            }
          }
          else if (opcion4 == 0)
          {
            cout << "********************          Tu equipo es el Español          ********************";
          }
        }
        else if (opcion3 == 0)
        {
          cout << "Tu equipo es de la ciudad de villareal? s/1 n/0" << endl;
          cin >> opcion4;
          if (opcion4 == 1)
          {
            cout << "********************          Tu equipo es el FC Villareal          ********************" << endl;
          }
          else if (opcion4 == 0)
          {
            cout << "Tu equipo de la ciudad de villareal es de la segunda divicion" << endl;
          }
        }
      }
    } // Fin primer IF

    //! ****************************************************************************************
    else if (opcion == 0)
    {
      cout << "Tu equipo es de la Premiere leage? s/1 n/0" << endl;
      cin >> opcion;

      if (opcion == 1) // pregunta 1
      {
        system("color 2");
        cout << "Tu equipo jugo la champions? s/1 n/0" << endl;
        cin >> opcion2;

        if (opcion2 == 1)
        {
          system("color 5f");
          cout << "El color distintivo del equipo es el azul o celeste? s/1 n/0" << endl;
          cin >> opcion3;
          if (opcion3 == 1)
          {
            system("color 1f");
            cout << "Tu equipo es ganador reciente de la Premiere League?" << endl;
            cin >> opcion4;

            if (opcion4 == 1)
            {
              cout << "********************          Tu equipo es el Manchester City          ********************" << endl;
            }
            else if (opcion4 == 0)
            {
              cout << "********************          Tu equipo es el Chelsea          ********************" << endl;
            }
          }
          else if (opcion3 == 0)
          {
            cout << "Tu equipo estuvo en la semifinal de champios 21/22? s/1 n/0" << endl;
            cin >> opcion4;
            if (opcion4 == 1)
            {
              cout << "********************          Tu equipo es el Liverpool          ********************";
            }
            else if (opcion4 == 0)
            {
              cout << "********************          Tu equipo es el Tottenham Hotspur          ********************";
            }
          }
        }
        else if (opcion2 == 0)
        {
          cout << "Tu quipo juega la Europa League? s/1 n/0" << endl;
          cin >> opcion3;
          if (opcion3 == 1)
          {
            cout << "Jugo CR7 en tu quipo? s/1 n/0" << endl;
            cin >> opcion4;
            if (opcion4 == 1)
            {
              cout << "********************          Tu equipo es el Manchester United          ********************" << endl;
            }
            else if (opcion4 == 0)
            {
              cout << "Eres el actual lider de la Premiera Leage? s/1 n/0" << endl;
              cin >> opcion5;
              if (opcion5 == 1)
              {
                cout << "********************          Tu equipo es el Arsenal          ********************";
              }
            }
          }
          else if (opcion3 == 0)
          {
            cout << "Tu equipo es uno de los mas ricos de la Premiere? s/1 n/0" << endl;
            cin >> opcion4;
            if (opcion4 == 1)
            {
              cout << "********************          Tu equipo es el Newcastle          ********************" << endl;
            }
            else if (opcion4 == 0)
            {
              cout << "Tu equipo tiene nombre de un animal? s/1 n/0" << endl;
              cin >> opcion5;
              if (opcion5 == 1)
              {
                cout << "********************          Tu equipo, son los Wolves          ********************" << endl;
              }
              else if (opcion5 = 0)
              {
                cout << "**********          Tu equipo no es famoso, por eso no esta en la lista.          **********" << endl;
              }
            }
          }
        }
      }

      // ****************************************************************************************

      else if (opcion == 0) // pregunta 1
      {
        cout << "Tu equipo es de la Bundesliga? s/1 n/0" << endl;
        cin >> opcion2;
        if (opcion2 == 1)
        {
          system("color 2");
          cout << "Tu equipo es es de la ciudad de LeverKusen? s/1 n/0" << endl;
          cin >> opcion2;
          if (opcion2 == 1)
          {
            system("color 5f");
            cout << "Tu equipo jugo la champions? s/1 n/0" << endl;
            cin >> opcion3;
            if (opcion3 == 0)
            {
              system("color 1f");
              cout << "Tu equipo es ganador reciente?" << endl;
              cin >> opcion4;
              if (opcion4 == 0)
              {
                cout << "********************          Bayer leerkusen          ********************" << endl;
              }
            }
          }
          else if (opcion2 == 0)
          {
            cout << "Tu equipo es es de la ciudad de Dormunt? s/1 n/0" << endl;
            cin >> opcion3;
            if (opcion3 == 1)
            {
              cout << "Tu equipo jugo la champions s/1 n/0" << endl;
              cin >> opcion4;
              if (opcion4 == 1)
              {
                cout << "Tu equipo jugo recientemente Europa league s/1 n/0" << endl;
                cin >> opcion5;
                if (opcion5 == 1)
                {
                  cout << "**********          No encontramos tu equipo          **********" << endl;
                }
              }
              else if (opcion4 == 0)
              {
                cout << "********************          Tu equipo es el Borussia Dormund          ********************";
              }
            }
            else if (opcion3 == 1)
            {
              cout << "Tu equipo es de la ciudad de Munich? s/1 n/0" << endl;
              cin >> opcion4;
              if (opcion4 == 1)
              {
                cout << "********************          Tu equipo es el FC Bayer          ********************" << endl;
              }
              else if (opcion4 == 0)
              {
                cout << "Tu equipo de la ciudad de sajonia RB Leipzing" << endl;
              }
            }
          }
        }
        else
        {
          cout << "El Clarividente del football solo adivina equipo de las ligas mas competitivas." << endl;
        }
      }
    } // Fin del else

    cout << endl
         << "----------------------------------------------------------------------" << endl
         << "Desea volver a ejecutar?" << endl;
    cout << "1 = si, 0 = no ";
    cin >> bucle;
  }
}

void simbolo()
{
  cout << "          WWWWWWWWWWWWWWWWWWWWWWWWNWWWWWWWWWWWWWWN0dc,..        ..,cd0NWWWWWWWWWWNWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0xl:;,.                .;cd0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0o:;:okKXKkl,       ..... .co:,:o0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNkc,;dKNWWWWWWW0,.lxxkOO00K0x;,oK0d:,cONWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWNO:'cONWWWWWWWWWNo.lNWWWWWWWWWWXd,,xXNOc,:ONWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWKl.,kNWWWWWWWWWWWO';0WWWWWWWWWWWWWKl':kNNO:'lKWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWW0; 'OWWWWWWWWWWWWK:'kWWWWWWWWWWWWWWWNOc'cONXd';0WWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWO, .dNWWWWWWWWWNKOc.lNWWWWWWWWWWWWWWWWWNo..'col.,OWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWW0;  .:d0NWWWNKkl;.   ;ONWWWWWWWWWWWWWWWWXc     .. ;0WWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWXc.'xOo:,:oxd:.        .c0NWWWWWWWWWWWWWNo.         cXWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWk.,0WWWN0d;.             .oOKWWWWWNNNXKKd.          .kWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWNl.dWWWWWWWx.               .'clccc::::::'            lNWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWX:.OWWWWWWWk.                'lddxkOO0KXX0l.          :XWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWK;'OWWWWWWW0'              ,d0WWWWWWWWWWWWNd.         ;KWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWX:.OWWWWWWWX:             ;0WWWWWWWWWWWWWWWNk.     .. :XWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWNl.dWWWWWWWX:            ;0WWWWWWWWWWWWWWWWWWx. .:d0o.lNWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWk.;KWWWWWKc.:dlc;,...  .OWWWWWWWWWWWWWWWWWWXc.oXWWK:.kWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWXc.oXWWWO;'xNWWWWNXK0Ol.cKWWWWWWWWWWWWWWWWKc'dNWWNd.cXWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWW0,.,oOx,,ONWWWWWWWWWWNx';0WWWWWWWWWWWWWWK:'dNWWWk';0WWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWO,  ..;0WWWWWWWWWWWWWNk,;oOWWWWWWWWWWW0:'dNWWNk,,OWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWW0;   'OWWWWWWWWWWWWWWWO;.,kNWWWWWWNXO;'xNWWXd';0WWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWKl.  .xNWWWWWWWWWWWWWW0d;.:llcc:;,'..oNWNO:'lKWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWNO:. .cKWWWWWWWWWWWWNkl'            cKOc':ONWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNk:. .;clodxO0KXNKl.              .,,:kNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0d;. ..,::::::'               .;o0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0xc:;:::ccc;'.         .,cx0NWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
  Sleep(100);
  cout
      << "          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWX0dc,.....     ..,cx0XWWWWWNWWWWWWWWWWWWWWWWWWWWWWWWWNWWWWWWW" << endl;
  Sleep(2000);
  system("cls");
}

void gotoxy(int x, int y)
{
  HANDLE centro;
  COORD coordenadas;
  centro = GetStdHandle(STD_OUTPUT_HANDLE);
  coordenadas.X = x;
  coordenadas.Y = y;
  SetConsoleCursorPosition(centro, coordenadas);
}
void centrar_texto(const char *texto, int y)
{
  int largo = strlen(texto);
  gotoxy(90 - (largo / 2), y);
  cout << texto;
}