#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[50] = "Algoritma Ve Planlama";
    int boyut = 0; // Metnin uzunlu�unu tutacak
    int i;

    // Metnin uzunlu�unu bulma
    while (metin[boyut] != '\0') {
        boyut++;
    }

    printf("Metnin boyutu: %d\n", boyut);

    // Metni ters s�rayla yazd�rma
    printf("Ters sirali metin: ");
    for (i = boyut - 1; i >= 0; i--) {
        printf("%c", metin[i]);
    }
    printf("\n");

    return 0;
}
