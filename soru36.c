#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	
    int ogrenciSayisi,i; // SAYISAL DE���KEN OLARAK DE�ERLER� TANIMLIYORUZ

    printf("Kac ogrenciniz bulunmakta: "); // KULLANICIDAN DE�ER ALMA
    scanf("%d",&ogrenciSayisi); // DE�ER� HAFIZADA TUTMA



    int toplam = 0; // SAYISAL DE���KEN OLARAK toplam DE�ER�N� TANIMLIYORUZ
    for (i = 0; i < ogrenciSayisi; ++i) { // i Y� 0 A E��TL�YORUZ i ogrenciSayisi OLANA KADAR i yi 1 ARTTIRIYORUZ
        printf("%d. ��rencinin notunu girin: ", i+1); // �GRENC�N�N NOTUNU  G�RD�R�YORUZ i DE�ER�N� 1 ARTTIRIYOR
        int t; // SAYISAL DE���KEN OLARAK t DE�ER�N� TANIMLIYORUZ
        scanf("%d",&t); // DE�ERLER� HAFIZADA TUTMA

        toplam += t; // toplam DE�ER�N� toplam + t DE�ER�N� TOPLAYIP DE�ERE E��TL�YORUZ
    }

    printf("%d ogrencinin notlar�n�n toplami: %d \n ortalamas�: %.2f dir", ogrenciSayisi, toplam, (float)toplam/ogrenciSayisi); // ogrenciSayisi, toplam, ONDALIKLI SAYI OLARAK toplam/ogrenciSayisi DE�ERLER� EKRANA YAZDIRIYORUZ


    return 0;
}

