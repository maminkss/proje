// Girilen bir sayi asal sayi ise bundan sonraki 10 asal sayiyi da listeyen program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int sayi = 0; // SAYISAL DE���KEN OLARAK sayi DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 int n = 0; // SAYISAL DE���KEN OLARAK n DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 int sayac = 0; // SAYISAL DE���KEN OLARAK sayac DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 char asal = 'E'; // KARAKTER DE���KEN OLARAK asal DE�ER�N� TANIMLIYORUZ VE "E" KR�TER� BEL�RL�YORUZ
 
 printf("\n Bir sayi giriniz: "); // KULLANICIDAN DE�ER ALMA
 scanf("%d",&sayi); // DE�ER� HAFIZADA TUTMA
 
 for(n=2;n<sayi;n++) // n DE�ER�N� 2 YE E��TL�YORUZ VE n DE�ER� sayi DE�ER�NDEN D���K OLANA KADAR n DE�ER�N� 1 ARTTIRIYORUZ
 {
  if( sayi % n == 0 ) // E�ER sayi DE�ER�N�N MODU n DE�ER� �SE
  {
   asal = 'H'; // asal de�erini "H" KR�TER�NE E��TL�YORUZ
   break;
  }
 }
 
 if( asal == 'E' ) // E�ER asal "E" �SE
 {
  printf("\n %d asal sayisindan sonraki ",sayi); // %d KOMUTUYLA sayi DE�ER�N� EKRANA �A�IRIYORUZ
  printf("10 asal sayi :\n"); // EKRANDA G�STERME
  sayi= sayi + 1; // sayi DE�ER�N� sayi DE�ER�N� 1 �LE TOPLAYIP DE�ER E��TL�YORUZ
 
  while(sayac < 10) // sayac 10 DAN K���K KO�ULU BEL�RL�YORUZ
  {
   asal = 'E'; // asal DE�ER�N� "E" YE TANIMLIYORUZ
 
   for(n=2;n<sayi;n++) // n DE�ER�N� 2 YE TANIMLIYORUZ n DE�ER� sayi DE�ER�NDEN K���K OLANA KADAR n DE�ER�NE 1 ARTTIR
   {
    if( sayi % n == 0 ) // E�ER sayi DE�ER�N�N n �LE MODU TAM B�L�N�YORSA
    {
     asal = 'H'; // asal DE�ER�N� "H" OLARAK TANIMLIYORUZ
     break;
    }
   }
   if(asal == 'E' ) // E�ER asal DE�ER� E �SE
   {
    printf("%d\t",sayi); // sayi DE�ER�N� EKRANA �A�IRIYORUZ
    sayac++; // sayac DE�ER�N� 1 ARTTIRIYORUZ
   }
 
   sayi++; // sayi DE�ER�N� 1 ARTTIRIYORUZ
  }
 }
 else // DE��LSE
  printf("\n %d asal sayi degildir.",sayi); // sayi DE�ER�N� EKRANA �A�IRIYORUZ %d KOMUTU �LE
 
 return 0;
}
