// Girilen bir metnin harflerini alfabetik s�raya g�re s�ralayan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      char metin[100]; // KARAKTER DE���KEN� OLARAK metin DE�ER� TANIMLIYORUZ VE 100 KR�TER� BEL�RL�YORUZ
      char bosluk; // KARAKTER DE���KEN� OLARAK bosluk DE�ER� TANIMLIYORUZ
 
      int uzunluk = 0; // SAYISAL DE���KEN OLARAK uzunluk DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
      int m = 0,n = 0; // SAYISAL DE���KEN OLARAK m VE n DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 
      printf("\n Bir metin giriniz : " );
      gets(metin);
 
      uzunluk = strlen(metin); // uzunluk DE�ER�N� strlen KOMUTUYLA metin DE�ER�N�N UZUNLU�UNU ALIP uzunluk DE�ER�NE E��TL�YORUZ
 
      for(m=0;m<uzunluk-1;m++) // m DE�ER� 0 DAN BA�LAYARAK uzunluk de�erinden k���k oldu�unda 1 AZALT VE m DE�ER�N� 1 ARTTIR
      {
            for(n=m+1;n<uzunluk;n++) // n DE�ER�N� m+1 OLARAK TANIMLIYORUZ n DE�ER� uzunluk DE�ER�NE KADAR DEVAM EDECEK VE n DE�ER�N� 1 ARTTIRIYORUZ
          {
              if(metin[m] > metin[n]) // E�ER metin[m} DE�ER� metin[n] DE�ER�NDEN B�Y�KSE
              {
                  bosluk = metin[m]; // bosluk DE�ER�N� metin[m] DE�ER�NE E��TL�YORUZ
                  metin[m] = metin[n]; // metin[m] DE�ER�N� metin[n] DE�ER�NE E��TL�YORUZ
                  metin[n] = bosluk; // metin[n] DE�ER�N� bosluk DE�ER�NE E��TL�YORUZ
              }
          }
      }
 
      printf("\n Harflerinin siralamasi %s",metin); // %s KOMUTUYLA metin DE�ER�N� EKRANA �A�IRIYORUZ
      return 0;
}
