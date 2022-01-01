#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

/*
    Source by DuniaIlkom
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    bool a, b;

    a = true;
    b = false;

    if (a) {
        printf("Ini akan ditampilkan...\n");
    }

    if (b) {
        printf("Ini tidak akan tampil...\n");
    }
 
    _getch();
    return 0;
}