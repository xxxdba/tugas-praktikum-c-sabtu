#include <stdio.h>

int main()
{
    int panjang = 10;
    int lebar = 7;
    int luas;

    luas = panjang * lebar;

    printf("Luas persegi panjang dengan panjang %d cm dan lebar %d cm adalah %dcm^2\n", panjang, lebar, luas);
    return 0;
}
