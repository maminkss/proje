// Girilen kelime i�erisindeki sesli harf say�s�n� bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      char kelime[100]; // KARAKTER DE���KEN� OLARAK kelime DE�ER� TANIMLIYORUZ VE 100 KR�TER� BEL�RL�YORUZ
      int uzunluk = 0; // SAYISAL DE���KEN OLARAK uzunluk DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
      int n = 0; // SAYISAL DE���KEN OLARAK n DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
      int sayac = 0; // SAYISAL DE���KEN OLARAK sayac DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
      char harf; // KARAKTER DE���KEN� OLARAK harf DE�ER� TANIMLIYORUZ 
 
      printf("\n Cumle giriniz: \n" ); // KULLANICIDAN DE�ER ALMA
      gets(kelime); // DE�ER� HAFIZADA TUTMA
 
      uzunluk = strlen(kelime); // uzunluk DE�ER�N� strlen KOMUTUYLA kelime DE�ER� ��ER�S�NDE uzunluk DE�ER�NE E��TLEME
 
      for(n=0;n<uzunluk;n++) // n DE�ER�N� 0 DAN BA�LAYARAK uzunluk DE�ER�NE KADAR n DE�ER�N� 1 ARTTIRMA
      {
          harf = kelime[n]; // harf DE�ER�N� kelime DE�ER�N�N n DE�ER�NE E��TLEME
 
          if( harf >= 'a' && harf <= 'z' ) // E�ER harf DE�ER� a DAN B�Y�K VE a YA E��TSE VE harf DE�ER� z DE�ER�NDEN K���K VE E��TSE
              harf = harf - 32; // harf DE�ER�N� harf - 32 DE�ER�NE E��TL�YORUZ
 
          if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U') // E�ER harf A VEYA harf E VEYA harf I VEYA harf O VEYA harf U �SE
              sayac++; // sayaci 1 ARTTIR
      }
 
      printf("\n %s cumlesinde %d sesli harf vardir.",kelime,sayac); // kelime de�erini %s KOMUTUYLA EKRANDA G�STER�YORUZ VE sayad DE�ER�N�DE %d KOMUTUYLA EKRANDA G�STER�YORUZ
 
      return 0;
}
