// Kullan�c�n�n girece�i 5 sayiyi kullan�c�n�n istedi�i d�zende s�ralay�p ekranda listeleyen program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int sayilar[5]; // SAYISAL DE�ERLER� TANIMLAMA
 int sayac = 0; // SAYISAL DE�ERLER� TANIMLAMA
 int buyuk = 0, kucuk = 0; // SAYISAL DE�ERLER� TANIMLAMA 
 int temp = 0; // SAYISAL DE�ERLER� TANIMLAMA
 
 printf("\n Sayi siralama...");
 printf("\n ================\n");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
  fflush(stdin);
 }
 
 printf("\n\n Siralama Oncesi...");
 printf("\n ================= ");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("\n%i",sayilar[sayac]);
 }
 
 for( buyuk=0; buyuk<4 ; buyuk++)
 {
  for( kucuk = buyuk+1; kucuk<5; kucuk++)
  {
   if( sayilar[buyuk] > sayilar[kucuk] )
   {
    temp = sayilar[buyuk];
    sayilar[buyuk] = sayilar[kucuk];
    sayilar[kucuk] = temp;
   }
  }
 }
 
 printf("\n\n Siralama Sonrasi...");
 printf("\n ===================");
 
 for(sayac=0 ; sayac < 5; sayac++)
 {
  printf("\n %i",sayilar[sayac]);
 }
 
 getch();
}
