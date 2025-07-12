#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, toplamsayac = 0;
    char metin[] = "bu metinin içerisinde metin arayin.";
    char aranan[] = "metin";

    // Uzunluklarý hesaplama
    int uzunluk1 = strlen(metin);
    int uzunluk2 = strlen(aranan);
    printf("Metnin uzunlugu: %d \nArananin uzunlugu: %d\n", uzunluk1, uzunluk2);

    // Metin içinde arama
    for (i = 0; i <= uzunluk1 - uzunluk2; i++) {
        int sayac = 0;
        for (j = 0; j < uzunluk2; j++) {
            if (metin[i + j] == aranan[j]) {
                sayac++;
            } else {
                break; // Eþleþme bozulursa döngüden çýk
            }
        }
        if (sayac == uzunluk2) { // Tüm karakterler eþleþmiþse
            toplamsayac++;
        }
    }

    printf("Toplam %d kere bulundu.\n", toplamsayac);
    return 0;
}
