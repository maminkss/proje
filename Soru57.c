#include<stdio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 int main()
 {
    char metin[500]; // KARAKTER TANIMLAMA VE KARAKTERE 500 HARFL�K SINIR BEL�RLEME
    printf("Lutfen cevirelecek metni giriniz: "); // EKRANA YAZDIRMA
    gets(metin); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
    printf("Sonuc: \"%s\"\n",strupr(metin)); // SONUCU EKRANA VER�R STRUPR KOMUTU B�Y�K HARFLE YAZMAK ���N KULLANILMI�TIR

    return  0;
    
 }

