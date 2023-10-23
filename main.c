#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct dolgozo {
    int ID;
    char nev[51];
    char szemszin[21];
    int eletkor;
    float suly;
} dolgozo;

typedef enum szinek { KEK, PIROS, ZOLD, FEKETE, FEHER, LILA } szinek;

typedef enum bool {
    false,
    true
} bool;

int osszeg(int a, int b);

bool primE(int a)
{
    int oszto = 2;

    while (oszto < a)
    {
        if (a%oszto == 0) return false;
        oszto++;
    }

    return true;
}

int main()
{
    int tomb[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &tomb[i]);
    }

    printf("\nElem:\t Ertek:\t Cim:\n");

    for (int i = 0; i < 10; i++) {
        printf("tomb[%d]\t %d\t %p\n", i, *(tomb+i), tomb + i);
    }
}

int osszeg(int a, int b)
{

}

/*

bool ertek = primE(9);

    printf("Prim-e ? %s", (ertek == 1 ? "Igen" : "Nem"));

    int x = 3;
    int *pX = &x;

    printf("\nAz x valtozo erteke: %d", x);
    printf("\nAz x valtozo erteke: %d", *pX);

    return 0;

*/

/*

dolgozo Dolgozo1;

    puts("Kerlek toltsd fel az alkalmazottad:");
    puts("ID Nev Szemszin Eletkor Suly");
    scanf("%d %s %s %d %f", &Dolgozo1.ID, &Dolgozo1.nev, &Dolgozo1.szemszin, &Dolgozo1.eletkor, &Dolgozo1.suly);

    puts("Alkalmazott feltoltese....");
    puts("...");
    puts("..");
    puts(".");

    printf("%d %s %s %d %f", Dolgozo1.ID, Dolgozo1.nev, Dolgozo1.szemszin, Dolgozo1.eletkor, Dolgozo1.suly);


*/
