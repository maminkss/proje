// 5 ��rencinin boylar�n� ve kilolar�n� sorarak boy ve ilo ortalamas�n� bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 float boy[5],kilo[5]; // ONDALIKLI SAYI DE�ER�NDE boy ve kilo DE�ER� TANIMLAMA VE 5 KR�TER� BEL�RLEME
 float yuksekkilo=0,yuksekboy=0; // ONDALIKLI SAYI DE�ER�NDE yuksekkilo DE�ER�N� 0 A E��TLEME VE yuksekboy DE�ER�N� 0 A E��TLEME
 float ortboy=0,ortkilo=0; // ONDALIKLI SAYI DE�ER�NDE ortboy DE�ER�N� 0 A E��TLEME VE ortkilo DE�ER�N� 0 A E��TLEME 
 int n = 0; // SAYISAL DE�ERDE n DE�ER�N� TANIMLAMA VE 0 A E��TLEME
 
 for( n=0; n<5; n++) // D�NG� A�IP n DE�ER�N� 0 dan n DE�ER� 5 OLANA KADAR n yi 1 ARTTIRMA
 {
  printf("\n %d. Ogrencinin",n+1); // n DE�ER�N� 1 ARTTIRIP DE�ER� EKRANDA G�STERME
 
  printf("\nBoyu : "); // KULLANICIDAN DE�ER ALMA
  scanf("%f",&boy[n]); // DE�ER� HAFIZADA TUTMA
 
  printf("Kilosu : "); // KULLANICIDAN DE�ER ALMA
  scanf("%f",&kilo[n]); // DE�ER� HAFIZADA TUTMA
  yuksekboy = yuksekboy + boy[n]; // yuksekboy DE�ER�N� yuksekboy ve boy[n] DE�ER�N� TOPLAYIP DE�ERE E��TLEME
  yuksekkilo = yuksekkilo + kilo[n]; // yuksekkilo DE�ER�N� yuksekkilo + kilo[n] DE�ER�N� TOPLAYIP DE�ERE E��TLEME
 }
 
 ortboy = yuksekboy/5; // ortboy DE�ER�N� yuksekboy DE�ER�N� 5 E B�LEREK DE�ERE E��TLEME
 ortkilo = yuksekkilo/5; // ortkilo DE�ER�N� yuksekkilo DE�ER�N� 5 E B�LEREK DE�ERE E��TLEME
 
 printf("\n Agirlik Ortalamasi : %.2f ",ortboy); // ortboy DE�ER�N� EKRANDA G�STERME
 printf("\n Boy Ortalamasi : %.2f ",ortkilo); // ortkilo DE�ER�N� EKRANDA G�STERME
 
 return 0;
}
