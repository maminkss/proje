// Girilen c�mle i�erisinde kullan�c�n�n istedi�i karakterden ka� tane oldu�unu bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      char kelime[100]; // KARAKTER DE���KEN� OLARAK kelime DE�ER� TANIMLAYIP 100 KR�TER� BEL�RLEME
      int uzunluk = 0; // SAYISAL DE���KEN OLARAK uzunluk DE�ER� TANIMLAYIP 0 A E��TLEME
      int n = 0; // SAYISAL DE���KEN OLARAK n DE�ER� TANIMLAYIP 0 A E��TLEME
      int sayac = 0; // SAYISAL DE���KEN OLARAK sayac DE�ER� TANIMLAYIP 0 A E��TLEME
      char aranan; // KARAKTER DE���KEN� OLARAK aranan DE�ER� TANIMLAMA 
      char harf; // KARAKTER DE���KEN� OLARAK harf DE�ER� TANIMLAMA

      printf("\n Bir cumle giriniz: "); // KULLANICIDAN DE�ER ALMA
      gets(kelime); // DE�ER� HAFIZADA TUTMA
 
      printf("\n Hangi harf aranacak: "); // KULLANICIDAN DE�ER ALMA
      scanf("%c",&aranan); // DE�ER� HAFIZADA TUTMA
 
      uzunluk = strlen(kelime); // uzunluk DE�ER�N� strlen KOMUTUYLA kelime DE�ER�N�N UZUNLU�UNU ALIP DE�ERE E��TL�YORUZ
 
      for( n= 0; n < uzunluk ; n++) // n DE�ER� 0 DAN BA�LAYARAK uzunluk DE�ER�NE KADAR 1 ARTTIRMA
      {
          harf = kelime[n]; // harf DE�ER�N� kelime DE�ER�N�N n DE�ER� ��ER�S�NDE harf DE�ER�NE E��TLEME
 
          if(aranan == harf) // E�ER aranan harf DE�ER�NE E��TSE
              sayac++; // sayac DE�ER�N� ARTTIR
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %d adet geciyor.",kelime,aranan,sayac); // %s KOMUTUYLA kelime DE�ER�N� �A�IRYORUZ %c KOMUTUYLA aranan DE�ER� VE %d KOMUTUYLADA sayac DE�ER�N EKRANDA G�STER�YORUZ
 
      return 0;
}
