#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kontrol;
int *futbolcu_sayisi;

struct iletisim_bilgisi {
    int telno;
};

typedef struct sporcu {
    int ogrenci_sirasi;
    int forma_numarasi;
    char mevki[10];
    char isim[10];
    char soyisim[10];
    int yas;
    struct iletisim_bilgisi iletisim;
} s1;

s1 *p;

void futbolcu_kayit() {
    s1 *temp = realloc(p, (*futbolcu_sayisi + 1) * sizeof(s1));
    if (temp == NULL) {
        printf("Bellek tahsisi baþarýsýz oldu!\n");
        exit(1);
    }
    p = temp;

    printf("Forma no:\n");
    scanf("%d", &(p[*futbolcu_sayisi].forma_numarasi));

    printf("Mevki:\n");
    scanf("%s", p[*futbolcu_sayisi].mevki);

    printf("Isminizi giriniz:\n");
    scanf("%s", p[*futbolcu_sayisi].isim);

    printf("Soyisminizi giriniz:\n");
    scanf("%s", p[*futbolcu_sayisi].soyisim);

yas:
    printf("Yasinizi giriniz (altyapiya alim yapildigi icin maximum yas 20dir):\n");
    scanf("%d", &(p[*futbolcu_sayisi].yas));
    if (p[*futbolcu_sayisi].yas > 20) {
        printf("Bu yasta kayit kabul edemiyoruz:\n");
        goto yas;
    }

    printf("Telefon numarasi giriniz:\n");
    scanf("%d", &(p[*futbolcu_sayisi].iletisim.telno));

    p[*futbolcu_sayisi].ogrenci_sirasi = *futbolcu_sayisi + 1;
    printf("Ogrenci siraniz: %d\n\n", p[*futbolcu_sayisi].ogrenci_sirasi);

    (*futbolcu_sayisi)++;

    printf("Menuye geri donmek icin 1'e, cikis yapmak icin herhangi bir tusa basiniz.\n");
    int menuye_donus;
    scanf("%d", &menuye_donus);
    if (menuye_donus != 1) {
        exit(0);
    }
}

void listele() {
    for (int i = 0; i < *futbolcu_sayisi; i++) {
        printf("Forma numarasi: %d\n", p[i].forma_numarasi);
        printf("Isim: %s\n", p[i].isim);
        printf("Soyisim: %s\n", p[i].soyisim);
        printf("Mevki: %s\n", p[i].mevki);
        printf("Yas: %d\n", p[i].yas);
        printf("Ogrenci sira numarasi: %d\n", p[i].ogrenci_sirasi);
        printf("Telefon numarasi: %d\n\n", p[i].iletisim.telno);
    }

    printf("Menuye donmek icin 1'e, cikmak icin herhangi bir tusa basiniz:\n");
    int xy;
    scanf("%d", &xy);
    if (xy != 1) {
        exit(0);
    }
}

void guncellemefonk() {
    printf("Bilgi degistirmek istediginiz ogrencinin ogrenci sirasini giriniz:\n");
    int temp;
    scanf("%d", &temp);
    int found = 0;

    for (int i = 0; i < *futbolcu_sayisi; i++) {
        if (temp == p[i].ogrenci_sirasi) {
            printf("Forma no:\n");
            scanf("%d", &p[i].forma_numarasi);

            printf("Mevki:\n");
            scanf("%s", p[i].mevki);

            printf("Isminizi giriniz:\n");
            scanf("%s", p[i].isim);

            printf("Soyisminizi giriniz:\n");
            scanf("%s", p[i].soyisim);

            printf("Yasinizi giriniz:\n");
            scanf("%d", &p[i].yas);

            printf("Telefon numarasi giriniz:\n");
            scanf("%d", &p[i].iletisim.telno);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Boyle bir oyuncu numarasi yoktur:\n");
    }

    printf("Menuye donmek icin 1'e, cikmak icin herhangi bir tusa basiniz:\n");
    int xy;
    scanf("%d", &xy);
    if (xy != 1) {
        exit(0);
    }
}

void ogrenci_kayit_silme() {
    printf("Kayit silmek istediginiz ogrencinin sirasini giriniz:\n");
    int gecici;
    scanf("%d", &gecici);

    for (int i = 0; i < *futbolcu_sayisi; i++) {
        if (gecici == p[i].ogrenci_sirasi) {
            p[i].forma_numarasi = 0;
            strcpy(p[i].mevki, "Silindi");
            strcpy(p[i].isim, "Silindi");
            strcpy(p[i].soyisim, "Silindi");
            p[i].yas = 0;
            p[i].iletisim.telno = 0;
        }
    }

    printf("Menuye donmek icin 1'e, cikmak icin herhangi bir tusa basiniz:\n");
    int xy;
    scanf("%d", &xy);
    if (xy != 1) {
        exit(0);
    }
}

void ogrenci_arama() {
    printf("Aramak istediginiz ogrencinin sirasini giriniz:\n");
    int gecici;
    scanf("%d", &gecici);
    int found = 0;

    for (int i = 0; i < *futbolcu_sayisi; i++) {
        if (gecici == p[i].ogrenci_sirasi) {
            printf("Forma numarasi: %d\n", p[i].forma_numarasi);
            printf("Mevki: %s\n", p[i].mevki);
            printf("Isim: %s\n", p[i].isim);
            printf("Soyisim: %s\n", p[i].soyisim);
            printf("Yas: %d\n", p[i].yas);
            printf("Telefon numarasi: %d\n", p[i].iletisim.telno);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Boyle bir oyuncu numarasi yoktur:\n");
    }

    printf("Menuye donmek icin 1'e, cikmak icin herhangi bir tusa basiniz:\n");
    int xy;
    scanf("%d", &xy);
    if (xy != 1) {
        exit(0);
    }
}

void ogrenci_odeme() {
    printf("Odeme bilgisi almak istediginiz ogrencinin sirasini giriniz:\n");
    int gecici;
    scanf("%d", &gecici);
    int found = 0;

    for (int i = 0; i < *futbolcu_sayisi; i++) {
        if (gecici == p[i].ogrenci_sirasi) {
            int odeme = 200 + (p[i].yas * 50);
            printf("Odemeniz: %d\n", odeme);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Boyle bir oyuncu numarasi yoktur:\n");
    }

    printf("Menuye donmek icin 1'e, cikmak icin herhangi bir tusa basiniz:\n");
    int xy;
    scanf("%d", &xy);
    if (xy != 1) {
        exit(0);
    }
}

void menufonk() {
    printf("--------------------------------------------------------------------------------------------\n\n\n");
    printf("\n\n\n\n------------------------------- EMIRSPOR FUTBOL OKULU ISLEMLER ---------------------------\n\n\n\n\t\t\t\t      HOSGELDINIZ!\n\n\n\n");
    printf("----------------------------------------------------------------------------------------------\n\n\n");
    printf("\n\t\t\t\t MENU\n\n");
    printf("1 - Sporcu listesi\n");
    printf("2 - Yeni sporcu ekleme\n");
    printf("3 - Sporcu kaydi guncelleme\n");
    printf("4 - Sporcu kaydi silme\n");
    printf("5 - Sporcu arama\n");
    printf("6 - Sporcu odeme bilgisi\n");
    printf("Herhangi bir tusa basarak cikis yapabilirsiniz.\n\n");
    scanf("%d", &kontrol);
}

int main() {
    int a = 0;
    futbolcu_sayisi = &a;

    menufonk();

do {
        switch (kontrol) {
            case 1:
                listele();
                break;
            case 2:
                futbolcu_kayit();
                break;
            case 3:
                guncellemefonk();
                break;
            case 4:
                ogrenci_kayit_silme();
                break;
            case 5:
                ogrenci_arama();
                break;
            case 6:
                ogrenci_odeme();
                break;
            default:
                exit(0);
        }
        menufonk();
    } while (1);

    return 0;
}
