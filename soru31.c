// Kullan�c� negatif bir sayi girinceye kadar kullan�c�dan bir sayi girmesini isteyen ve girilen sayiyi ekrana yazdiran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int sayi = 0; // SAYISAL DE�ERDE DE�ER TANIMLAMA
 
 while( sayi >= 0) // sayi >= 0 KO�ULU VERME
 {
  printf("\nLutfen bir sayi giriniz: "); // KULLANICIDAN DE�ER ALMA
  scanf("%d",&sayi); // DE�ER� HAFIZADA TUTMA
 
  printf("Girdiginiz sayi: %d ",sayi); // sayi DE�ER�N� EKRANDA G�STERME
 }
 
 return 0;
}
