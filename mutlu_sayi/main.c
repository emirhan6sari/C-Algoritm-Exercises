/*Mutlu Say� Nedir?
Bir say�, �u kurala g�re i�lemler sonucu 1 oluyorsa, bu say� "mutlu say�" olarak adland�r�l�r:

Say�n�n her bir basama��n�n karesi al�n�r ve toplan�r.
Elde edilen yeni say� �zerinde ayn� i�lem tekrarlan�r.
Bu i�lemler sonucu say� 1 olursa, bu say� **"mutlu say�"**d�r.
E�er bir d�ng�ye girerse (�rne�in, s�rekli 4, 16, 37 gibi de�erler tekrar eder), say� mutlu de�ildir.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,aratoplam=0,kalan=0,toplam=0;
    int alt_sinir,ust_sinir;

    printf("bir altsinir giriniz:");
    scanf("%d",&alt_sinir);
    printf("bir ustsinir giriniz:");
    scanf("%d",&ust_sinir);
    for(i=alt_sinir ; i<ust_sinir ; i++)
    {
        sayi=i;
        while(toplam!=1 && toplam!=4)
        {
            toplam=0;

            while(sayi>0)
            {
                kalan=sayi%10;
                aratoplam=kalan*kalan;
                toplam=aratoplam+toplam;
                sayi=sayi/10;

            }
            sayi=toplam;
        }


        if(toplam==1)
            printf("%d sayiniz mutludur.",i);
        toplam=0;



    }
    return 0;
}
