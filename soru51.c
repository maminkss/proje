// Ayr� ayr� girilen ad� ve soyadi bilgilerini birle�tirerek tam ad�n� g�steren program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA

int main()
{
      char adi[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFL�K SINIR BEL�RLEME
      char ad2[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFL�K SINIR BEL�RLEME
      char soyadi[25]; // KARAKTER TANIMLAMA VE KARAKTERE 25 HARFL�K SINIR BEL�RLEME
      char tamadi[100]; // KARAKTER TANIMLAMA VE KARAKTERE 100 HARFL�K SINIR BEL�RLEME
 
      printf("\n Adi : "); // KULLANICIDAN DE�ER ALMA
      gets(adi); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR 
 
      printf("\n Ikinci Adi : "); // KULLANICIDAN DE�ER ALMA
      gets(ad2); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
 
      printf("\n Soyadi : "); // KULLANICIDAN DE�ER ALMA
      gets(soyadi); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
 
      strcpy(tamadi,adi); //B�R KATARI BA�KA KATARA KOPYALAMAK ���N KULLANILDI
      strcat(tamadi," "); //B�R KATARI BA�KA KATARA KOPYALAMAK ���N KULLANILDI
      strcat(tamadi,ad2); //B�R KATARI BA�KA KATARA KOPYALAMAK ���N KULLANILDI
      strcat(tamadi," "); //B�R KATARI BA�KA KATARA KOPYALAMAK ���N KULLANILDI
      strcat(tamadi,soyadi); //B�R KATARI BA�KA KATARA KOPYALAMAK ���N KULLANILDI
 
      printf("\n Adi Soyadi : %s",tamadi); // DE�ER� EKRANDA YAZDIRMA
 
      return 0;
}
