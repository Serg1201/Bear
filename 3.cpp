
#include "TXLib.h"

//{ Прототипы 1

void DrawHeadlessBear (int x, int y, double zoomX, double zoomY, double STail, double SEye, double SEar, double FrLegs);  // Прототип функции DrawHeadlessBear


void DrawSuperTank (int x, int y, double zoomX, double zoomY, double SW);


void DrawSun (int x, int y, double zoom);


void DrawFrightedSoldier (int x, int y);


void DrawCloud (int x, int y, double zoom);


void MoveCloud();


void MoveSuperTank();


void MoveHeadlessBear ();



//}

int main ()
    {
    txCreateWindow (1500, 950);


    DrawSuperTank (1100, 525, 1.6, 1, 2);


    DrawSuperTank (1100, 700, 2, 1, 1.5);


    DrawHeadlessBear (200, 452, 1.5, 1, 1, 1, 2, 20);


    DrawHeadlessBear (500, 600, 1.7, 1.2, 2, 1.1, 1.5, 30);  // Вызов функции DrawHeadlessBear


    DrawSun (100, 100, 2);


    DrawFrightedSoldier (1100, 900);


    DrawFrightedSoldier (1200, 900);


    DrawCloud (1120, 190, 1);


    DrawCloud (500, 190, 2);


    MoveCloud ();


    MoveSuperTank ();


    MoveHeadlessBear ();
    }

void DrawHeadlessBear (int x, int y, double zoomX, double zoomY, double SzTail, double SzEye, double SzEar, double FrLegs)
    {
    txSetFillColor (RGB (128, 64, 0));

    txEllipse (x - 100 * zoomX, y - 47 * zoomY, x + 100 * zoomX, y + 48 * zoomY);

    txCircle  (x +  90 * zoomX, y - 62, 40);

    txEllipse (x - 100 * zoomX, y - 2 * zoomY,                x - 75 * zoomX, y +          88 * zoomY);
    txEllipse (x -  50 * zoomX, y - 2 * zoomY,                x - 25 * zoomX, y +          88 * zoomY);
    txEllipse (x +  20 * zoomX, y -     zoomY * (2 + FrLegs), x + 45 * zoomX, y + zoomY * (88 - FrLegs));
    txEllipse (x +  70 * zoomX, y +     zoomY * (2 - FrLegs), x + 95 * zoomX, y + zoomY * (88 - FrLegs));


    txSetFillColor (RGB (255, 255, 255));
    txCircle (x +  70 * zoomX, y -  82 * zoomY, 10 * SzEye);

    txSetFillColor (TX_GREEN);
    txCircle (x + 110 * zoomX, y -  82 * zoomY, 10 * SzEye);

    txSetFillColor (RGB (128, 64, 0));

    txSetFillColor (TX_PINK);
    txCircle (x - 95 * zoomX, y -  23 * zoomY, 10 * SzTail);

    txSetFillColor (RGB (128, 64, 0));
    txCircle (x +  50 * zoomX, y -  92 * zoomY, 10 * SzEar);
    txCircle (x + 115 * zoomX, y - 107 * zoomY, 10 * SzEar);
    }

void DrawSuperTank (int x, int y, double zoomX, double zoomY, double SW)
    {
    txSetFillColor (RGB (189, 169, 31));
    txRectangle (x-100*zoomX, y+40*zoomY, x+100*zoomX, y-40*zoomY);
    txRectangle (x-50*zoomX, y-60*zoomY, x+50*zoomX, y-40*zoomY);
    txRectangle (x-250, y-50, x, y-60);


    txCircle (x-165, y+235, 15*SW);
    }

void DrawSun (int x, int y, double zoom)
    {
    txSetFillColor (RGB (255, 255, 128));
    txCircle (x, y, 50*2);
    txLine (x, y-50*zoom, x, y-99*zoom);
    txLine (x, y+50*zoom, x, y+100*zoom);
    txLine (x-50*zoom, y, x+50*zoom, y);
    txLine (x-25*zoom, y+25*zoom, x-75*zoom, y+125*zoom);
    txLine (x+25*zoom, y+25*zoom, x+75*zoom, y+125*zoom);
    txLine (x-25*zoom, y-25*zoom, x-100*zoom, y-100*zoom);
    txLine (x+25*zoom, y-25*zoom, x+100*zoom, y-100*zoom);
    txLine (x-50*zoom, y, x-100*zoom, y);
    txLine (x+50*zoom, y, x+100*zoom, y);
    }

void DrawFrightedSoldier(int x, int y)
    {
    txDrawMan (x, y, 25*2, 100*2, TX_WHITE, 0, 0, 0, 0, 0.8, 0, 0, 1.0, 0, 0);
    }

void DrawCloud (int x, int y, double zoom)
    {
    txSetFillColor (RGB (255, 255, 255));
    txEllipse (x-120*zoom, y-55*zoom, x+30*zoom, y+25*zoom);
    txEllipse (x-90*zoom, y-35*zoom, x+110*zoom, y+55*zoom);
    txEllipse (x-95*zoom, y-53*zoom, x+220*zoom, y+20*zoom);
    }

void MoveCloud()
    {

    int x = 100;
    while (x <= 1000)
        {
        DrawCloud (x, 200, 1);

        x += 5;

        txSleep (200);
        }
    }
void MoveSuperTank ()
    {
    int x = 1000;
    while (x <= 200)
        {
        DrawSuperTank (x, 300, 2, 1, 1);

        x+=5;

        txSleep (200);
        }
    }

void MoveHeadlessBear ()
    {
    int x = 1000;
    while (x <= 200)
        {
        DrawHeadlessBear (x, 500, 1.5, 2.5, 1, 1, 1, 1);

        x+=5;

        txSleep (200);
        }
    }




