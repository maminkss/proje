// Girilen kelimenin karakter say�s�n� hesaplayan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      char kelime[100]; // KARAKTER DE���KEN� OLARAK kelime DE�ER� TANIMLIYORUZ VE 100 KR�TER� BEL�RL�YORUZ
      int uzunluk = 0; // SAYISAL DE���KEN OLARAK uzunluk DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 
 
      printf("\n Kelime giriniz: "); // KULLANICIDAN DE�ER ALMA
      gets(kelime); // DE�ER� HAFIZADA TUTMA
 
      uzunluk = strlen(kelime); // uzunluk DE�ER�N� strlen KARAKTER SAYISINI HESAPLAMAK ���N KULLANILIR PARANTEZ ��ER�S�NDE kelime DE�ER�N� ALMASI
 
      printf(" \"%s\" kelimesi \n %d karakter sayisi kadardir.",kelime,uzunluk); // kelime DE�ER�N� %s KOMUTUNDA �A�IRIYORUZ VE %d �LE uzunluk DE�ER�N� EKRANA �A�IRIYORUZ
      return 0;
}
