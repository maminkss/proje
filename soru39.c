// 10 tane sayinin �ift, tek ve asal olanlar�n� ayr� ayr� listeleyen program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10}; // SAYISAL DE���KEN OLARAK sayilar DE�ER� TANIMLIYORUZ VE 10 TANE DE���KEN TANIMLIYORUZ
 int sayac = 0; // SAYISAL DE���KEN OLARAK sayac DE�ER�N� TANIMLIYORUZ 0 A E��TL�YORUZ
 int sayi = 0; // SAYISAL DE���KEN sayi DE�ER�N� TANIMLIYORUZ 0 A E��TL�YORUZ
 char asal; // KARAKTER DE���KEN� OLARAK asal DE�ER� TANIMLIYORUZ
 
 printf("\n Cift Sayilar : "); // EKRANDA G�STERME
 
 for(sayac = 0;sayac<10;sayac++) // sayac DE�ER�N� 0 A E��TL�YORUZ VE sayac DE�ER� 10 DAN K���K OLANA KADAR sayac DE�ER�N� 1 ARTTIRIYORUZ
 {
  if (sayilar[sayac]%2 == 0 ) // E�ER sayilar[sayac] DE�ER�N�N 2 MODUNU TAM B�L�N�YORSA
   printf("%d\t",sayilar[sayac]); // sayilar[sayac] DE�ER�N� EKRANDA G�STER�YORUZ 
 }
 
 printf("\n\n Tek Sayilar : "); // EKRANDA G�STERME
 
 for(sayac = 0;sayac<10;sayac++) // sayac DE�ER�N� 0 A E��TL�YORUZ VE sayac DE�ER� 10 DAN K���K OLANA KADAR sayac DE�ER�N� 1 ARTTIRIYORUZ
 {
  if( sayilar[sayac]%2 != 0 ) // E�ER sayilar[sayac] DE�ER�N�N 2 MODU ALIYORUZ 0 A E��T DE��L �SE
   printf("%d\t",sayilar[sayac]); // sayilar[sayac] DE�ER�N� EKRANDA G�STER�YORUZ  
 }
 
 printf("\n\n Asal Sayilar : ");
 
 for(sayac = 0;sayac<10;sayac++) // sayac DE�ER�N� 0 A E��TL�YORUZ VE sayac DE�ER� 10 DAN K���K OLANA KADAR sayac DE�ER�N� 1 ARTTIRIYORUZ
 {
  asal = 'E'; // asal DE�ER�N� "E" YE E��TL�YORUZ
 
  for( sayi = 2; sayi < sayilar[sayac] ; sayi++ ) // sayi DE�ER�N� 2 YE E��TL�YORUZ sayi DE�ER� sayilar[sayac] OLANA KADAR sayi DE�ER�NE 1 ARTTIRIYORUZ
  {
   if( sayilar[sayac]%sayi == 0 ) // sayilar[sayac] DE�ER�N�N sayi MODUNU ALIYORUZ E�ER TAM B�L�N�YORSA
   {
    asal = 'H'; // asal DE�ER�N� "H" E TANIMLIYORUZ
    break;
   }
  }
 
  if( asal == 'E' ) // E�ER asal DE�ER� E �SE
   printf("%d\t",sayilar[sayac]); // EKRANA sayilar[sayac] DE�ER�N� �A�IRIYORUZ
 }
 
 return 0;
}
