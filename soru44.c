// 3*3 l�k bir matrisin de�erlerini kullan�c�ya soran ve matrisi ekrana yazd�ran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int matris[3][3]; // SAYISAL DE���KEN OLARAK DE�ER TANIMLAMA VE 3 KR�TER� VERME
 int satir = 0,sutun = 0; // SAYISAL DE���KEN OLARAK satir ve sutun DE�ERLER� TANIMLAMA VE 0 A E��TLEME
 
 for( satir=0 ; satir<3; satir++) // D�NG� A�IP satir DE�ER�N� 0 DAN BA�LAYARAK 3 OLANA DEK 1 ARTTIRMA
 {
  for( sutun=0; sutun<3; sutun++ ) // D�NG� A�IP sutun DE�ER�N� 0 DAN BA�LAYARAK 3 OLANA DEK 1 ARTTIRMA
  {
   printf("Deger [%d][%d] : ",satir+1,sutun+1); // satir DE�ER�NE VE sutun DE�ER�NE 1 ARTTIRIP EKRANDA G�STERME
   scanf("%d",&matris[satir][sutun]); // satir ve sutun DE�ERLER�N� matris DE�ER� ��ER�S�NDE EKRANDA G�STERME
  }
 }
 
 printf("\n Matris: \n"); // EKRANDA G�STERME
 
 for( satir=0 ; satir<3; satir++) // D�NG� A�IP satir DE�ER�N� 0 DAN BA�LAYARAK 3 OLANA DEK 1 ARTTIRMA
 {
  printf("\n"); // 1 SATIR ALTA ALMA
 
  for( sutun=0; sutun<3; sutun++ ) // D�NG� A�IP sutun DE�ER�N� 0 DAN BA�LAYARAK 3 OLANA DEK 1 ARTTIRMA
  {
   printf("\t%d",matris[satir][sutun]); // satir ve sutun DE�ERLER�N� matris DE�ER� ��ER�S�NDE EKRANDA G�STERME
  }
 }
 
 return 0;
}
