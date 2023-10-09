#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./szilva.h"

int main()
{
    int tomb[TOMB_N] = {1, 3, 4, 5, 2};

    for (int i = 1; i < N; i++) {
        for (int j = N - 1; j >= i; j--) {
            if (tomb[j-1] > tomb[j]) {
                int temp = tomb[j-1];
                tomb[j-1] = tomb[j];
                tomb[j] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < N; i++) printf("%d\n", tomb[i]);

    return 0;
}

/*

Összegzés:
    int sum = 0;
    int dolgozatok[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1};
    for (int i = 0; i < TOMB_N; i++) sum += dolgozatok[i];
    printf("%d", sum);

Eldöntés:
    int T = 3;
    int i = 0;
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1};

    while (i < TOMB_N && tomb[i] != T) i++;

    printf("%s", (i < TOMB_N ? "Van" : "Nincs"));

Lineáris keresés:
    Nem tudom, hogy van-e benne elem
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1};
    int i = 0;
    int T = 3;

    while (i < N && tomb[i] != T) i++;

    if (i < N) {
        printf("Van, indexe: %d", i);
    } else {
        printf("Nincs :/");
    }

Kiválasztás:
    Biztos vagyok benne, hogy van egy ilyen elem
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1};
    int i = 0;
    int T = 3;

    while (tomb[i] != T) i++;

    printf("A keresett elem indexe => %d", i);

Megszámlálás:
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1};
    int db = 0;
    int T = 3;

    for (int i = 0; i < TOMB_N; i++)
        if (tomb[i] == T)
            db++;

    printf("A keresett elem darabszama => %d", db);

Min, maximum, min és max egyszerre:
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1};
    int max = tomb[0];

    for (int i = 1; i < TOMB_N; i++)
        if (max < tomb[i])
            max = tomb[i];

    printf("A legnagyobb elem => %d", max);

Min, maximum index:
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1, 9};
    int minind = 0;

    for (int i = 1; i < TOMB_N; i++)
        if (tomb[minind] > tomb[i])
            minind = i;

    printf("A legkisebb elem indexe => %d", minind);

Kiválogatás:
    int tomb[TOMB_N] = {1, 3, 4, 5, 4, 4, 3, 2, 1, 9};
    int tomb2[TOMB_N];

    int T = 4;
    int j = 0;

    for (int i = 0; i < TOMB_N; i++) {
        if (tomb[i] == T) {
            tomb2[j] = tomb[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++) printf("Keresett elemeink %d\n", tomb2[i])

Csere:
    int tomb[TOMB_N] = {1, 3, 4, 5, 2};

    printf("\n");
    for (int i = 0; i < N; i++) printf("%d\n", tomb[i]);

    for (int i = 0; i < N -1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (tomb[i] < tomb[j]) {
                int temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < N; i++) printf("%d\n", tomb[i]);

Rendezés minimumindex kiválasztással: (Itt csak megnézi melyik kisebb, aztán megnézi, hogy kell e rendezni a végén
                                          így sokkal hatékonyabb, mint az előző, mert az előző minden esetben cserél)
    int tomb[TOMB_N] = {1, 3, 4, 5, 2};

    for (int i = 0; i < N -1; i++) {
        int minindex = i;

        for (int j = i + 1; j < N; j++) {
            if (tomb[j] < tomb[minindex]) {
                minindex = j;
            }
        }

        if (i != minindex) {
            int temp = tomb[i];
            tomb[i] = tomb[minindex];
            tomb[minindex] = temp;
        }
    }

    printf("\n");
    for (int i = 0; i < N; i++) printf("%d\n", tomb[i]);

Buborékos rendezés
    int tomb[TOMB_N] = {1, 3, 4, 5, 2};

    for (int i = 1; i < N; i++) {
        for (int j = N - 1; j >= i; j--) {
            if (tomb[j-1] > tomb[j]) {
                int temp = tomb[j-1];
                tomb[j-1] = tomb[j];
                tomb[j] = temp;
            }
        }
    }

char alma[80];
printf("alma= ");
scanf("%[^\n]s", alma);
printf("Az alma valtozo erteke: %s", alma);


*/
