#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <BillRizer.hpp>
#include <IslasGaluga.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Dibujo d1(25, 18, "billrizer");
    Dibujo e1(0, 32, "pasto1");
    Dibujo e2(100, 23, "pasto2");
    Dibujo e3(100, 33, "pasto2");

    bool ejecucion = true;
    while (ejecucion)
    {
        v.Actualizar();
        if (getch() == 'q')
        {
            ejecucion = false;
        }
        if (getch() == 'd')
        {
            d1.AvanzarX(4);
        }
        if (getch() == 'a')
        {
            d1.RetrocederX(4);
        }
        if (getch() == 's')
        {
            d1.BajarY(3);
        }
        if (getch() == 'w')
        {
            d1.SubirY(3);
        }
        // ciclo de dibujo
        clear();
        // v.Dibujar();

        e1.Dibujar();
        e2.Dibujar();
        e3.Dibujar();
        d1.Dibujar();

        refresh();
        usleep(41000);
    }

    return 0;
}