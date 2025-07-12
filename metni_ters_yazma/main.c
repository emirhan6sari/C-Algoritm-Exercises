#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[50] = "Algoritma Ve Planlama";
    int boyut = 0; // Metnin uzunluðunu tutacak
    int i;

    // Metnin uzunluðunu bulma
    while (metin[boyut] != '\0') {
        boyut++;
    }

    printf("Metnin boyutu: %d\n", boyut);

    // Metni ters sýrayla yazdýrma
    printf("Ters sirali metin: ");
    for (i = boyut - 1; i >= 0; i--) {
        printf("%c", metin[i]);
    }
    printf("\n");

    return 0;
}
