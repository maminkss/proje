// Girilen 10 sayi i�erisinde en b�y�k ve en k���k olan sayilari bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int sayilar[10]; // SAYISAL DE�ER�NDE sayilar DE�ER� TANIMLAMA VE 10 KR�TER� BEL�RLEME
 int sayac = 0; // SAYISAL DE�ER�NDE sayac DE�ER� TANIMLAMA VE 0 A E��TLEME
 int max = 0; // SAYISAL DE�ER�NDE max DE�ER� TANIMLAMA VE 0 A E��TLEME
 int min = 0; // SAYISAL DE�ER�NDE min DE�ER� TANIMLAMA VE 0 A E��TLEME
 
 for(sayac=0 ; sayac < 10; sayac++) // D�NG� A�MA  ve sayac DE�ER�N� 10 DAN K���K OLANA KADAR VE sayac� 1 ARTTIRMA
 {
  printf("%d. Sayi : ",sayac+1); // sayac DE�ER�N� EKRANA GET�RME VE 1 ARTTIRMA 
  scanf("%d",&sayilar[sayac]); // DE�ERLER� HAFIZADA TUTMA
 
  if( sayac == 0 ) // E�ER sayac == 0 �SE
   min = sayilar[0]; // min DE�ER�N� sayilar[0] DE�ER�NE E��TLEME
 
  if( sayilar[sayac] > max ) // E�ER sayilar[sayac] > MAX �SE
   max = sayilar[sayac]; // max DE�ER�N� sayilar[sayac] DE�ER�NE E��TLEME
 
  if( sayilar[sayac] < min ) // E�ER sayilar[sayac] < min DE�ER�NDEN K���K �SE
   min = sayilar[sayac]; // min DE�ER�N� sayilar[sayac] DE�ER�NE E��TLEME
 }
 
 printf("\n En B�y�k Sayi : %d ",max); // max DE�ER�N� EKRANDA G�STERME
 printf("\n En Kucuk Sayi : %d ",min); // min DE�ER�N� EKRANDA G�STERME
 
 return 0;
}
