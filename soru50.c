// Girilen iki kelimeden hangisinin uzun oldu�unu bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 
void main(void)
{
      char kelime1[50]; // KARAKTER T�R�NDE DE�ER TANIMLIYORUZ 50 �LE SINIRLANDIRIYORUZ
      char kelime2[50]; // KARAKTER T�R�NDE DE�ER TANIMLIYORUZ 50 �LE SINIRLANDIRIYORUZ
      int sonuc; // SAYI T�R�NDE DE�ER TANIMLAMA
 
      printf("\n 1. kelime :"); // KULLANICIDAN DE�ER ALMA
      gets(kelime1); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
 
      printf("\n 2. kelime :"); // KULLANICIDAN DE�ER ALMA
      gets(kelime2); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
 
      sonuc = strcmp(kelime1,kelime2); // SONUC DE�ER�N� strcmp KOMUTUYLA kelime1 VE kelime2 KAR�ILA�TIRIYOR
 
      if( sonuc == 0 ) // E�ER sonuc DE�ER� 0 A E��TSE
          printf("\n Kelimeler AYNI"); // SONUCU EKRANA YAZDIRMA
      else if( sonuc > 1 ) // E�ER sonuc > 1 �SE
    	{
          printf("\n 1. kelime daha uzun..."); // SONUCU EKRANA YAZDIRMA
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime1,kelime2); // KEL�MELE DE�ERLER�N� EKRANA YAZDIRMA
        }
      else if( sonuc < 1)
      	{
          printf("\n 2. kelime daha uzun..."); // SONUCU EKRANA YAZDIRMA
          printf("\n %s kelimesi %s kelimesinden daha uzun...",kelime2,kelime1); // KEL�MELE DE�ERLER�N� EKRANA YAZDIRMA
      	}
 
      return 0;
}
