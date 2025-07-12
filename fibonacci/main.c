#include <stdio.h>
#include <stdlib.h>

void fibonacci(int a) {
    int toplam = 0, sayi = 1, temp = 0;

    if (a <= 0) {
        printf("Lutfen pozitif bir sayi giriniz.\n");
        return;
    }

    printf("Fibonacci Serisi:\n");
    printf("%d \t", temp); // �lk Fibonacci say�s�: 0
    if (a > 1) printf("%d \t", sayi); // �kinci Fibonacci say�s�: 1

    for (int i = 2; i < a; i++) {
        toplam = sayi + temp;
        printf("%d \t", toplam);
        temp = sayi;
        sayi = toplam;
    }
    printf("\n");
}

int main() {
    int a;
    printf("Fibonacci hesabi istediginiz terim sayisini giriniz: ");
    scanf("%d", &a);
    fibonacci(a);
    return 0;
}
