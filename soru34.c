// Girilen bir sayinin "m�kkemmel sayi" olup olmad���n� bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <math.h> // K�T�PHANE TANIMLAMA
 
int main() {
 int sayi = 0; // SAYI T�R�NDE DE�ER TANIMLAMA
 int no = 0; // SAYI T�R�NDE DE�ER TANIMLAMA
 int rakam = 0; // SAYI T�R�NDE DE�ER TANIMLAMA
 int toplam = 0; // SAYI T�R�NDE DE�ER TANIMLAMA
 
 
 printf("\n Bir sayi giriniz : ") ; // KULLANICIDAN DE�ER ALMA
 scanf("%d",&sayi); // DE�ER� HAFIZADA TUTMA
 
 mukkemmel = sayi; // m�kkemmel DE�ER�N� sayi DE�ER�NE E��TLEME
 
 while( mukkemmel > 0 ) { // mukkemmel DE�ER� 0 DAN B�Y�K KO�ULU
  rakam = mukkemmel%10; // rakam DE�ER�N� mukkemmel DE�ER�N�N 10 MODUNU ALIP DE�ERE E��TL�YORUZ
  toplam = toplam + pow(rakam,3); // TOPLAM DE�ER�N� TOPLAM + POW YAN� KARES�N� ALARAK E��TL�YORUZ
  mukkemmel = mukkemmel/10; // mukkemmel DE�ER�N� mukkemmel DE�ER�N� 10 A B�LEREK DE�ERE E��TL�YORUZ
 }
 
 if( toplam == sayi ) // E�ER toplam == sayi �SE
  printf("\n %i sayisi mukemmel sayidir.",sayi); // sayi DE�ER�N� EKRANA YAZDIRMA
 else // DE��LSE
  printf("\n %i sayisi mukemmel sayi degildir.",sayi); // sayi DE�ER�N� EKRANA YAZDIRMA
 
 return 0;
}
