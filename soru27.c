// Girilen bir sayinin kuvvetini hesaplayan program.(Normal ve pow() ile)

#include <stdio.h> // K�T�PHANE TANIMLAMA 

int main()
{
 int taban = 0; // SAYISAL DE�ER TANIMLAMA VE SIFIRA E��TLEME
 int uskuvvet = 0; // SAYISAL DE�ER TANIMLAMA VE SIFIRA E��TLEME
 int sonuc = 1; // SAYISAL DE�ER TANIMLAMA VE 1 E E��TLEME
 int d = 0; // SAYISAL DE�ER TANIMLAMA VE SIFIRA E��TLEME 
 
 printf("\n Bir sayi giriniz: "); // KULLANICIDAN DE�ER ALMA
 scanf("%d",&taban); // DE�ER� HAFIZADA TUTMA 

 printf("\n Kuvveti giriniz: "); // KULLANICIDAN DE�ER ALMA
 scanf("%d",&uskuvvet); // DE�ER� HAFIZADA TUTMA

 for( d = 1; d <= uskuvvet; d++) // D�NG� A�MA d DE�ER�N� 1 E E��TLEY�P d<= uskuvvet VE d Y� 1 ARTTIRMA
 {
  sonuc = sonuc * taban; // sonuc DE�ER�N� sonuc * taban DE�ER�N�N SONUCUNA E��TL�YORUZ
 }
 
 printf("\n %d^%d = %li\n\n",taban,uskuvvet,sonuc); // SONUCLARI EKRANDA �A�IRIYORUZ 
 
 return 0;
}
