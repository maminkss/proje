// Kullan�c� taraf�ndan girilen bir metnin tersini veren program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <string.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      char metin[100]; // KARAKTER T�R�NDE DE�ER TANIMLIYORUZ 100 �LE SINIRLANDIRIYORUZ
      char ters[100]; // // KARAKTER T�R�NDE DE�ER TANIMLIYORUZ 100 �LE SINIRLANDIRIYORUZ
 
      int uzunluk = 0; // SAYI T�R�NDE DE�ER TANIMLAMA
      int n = 0; // SAYI T�R�NDE DE�ER TANIMLAMA
 
      printf("\n Bir metin giriniz : " ); // KULLANICIDAN DE�ER ALMA
      gets(metin); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
 
      uzunluk = strlen(metin); // UZUNLUK DE�ER�N� MET�N DE�ER� ��E�R�S�NDEK� KARAKTER D�Z�S�N�N UZUNLU�UNA E��TL�YOR
 
      for( n = 0 ; n < uzunluk; n++ ) // D�NG� A�MA n = 0 n DE�ER UZUNLUK DE�ER�NDEN K���K n Y� 1 ARTTIRMA
      {
          ters[n] = metin[uzunluk-1-n];  // MET�N UZUNLU�UNU B�R EKS�LTEREK G�STERME
      }
 
      printf("\n Girilen Metin : %s",metin); // metin DE�ER�N� EKRANA YAZDIRMA
      printf("\n Metnin Tersi  : %s",ters); // ters DE�ER�N� EKRANA YAZDIRMA
      return 0;
}
