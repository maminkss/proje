// * karakteri ile piramit olusturan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
void bosluk(int);
 
void main(void)
{
 int cizgi= 0; // SAY�SAL DE���KEN OLARAK cizgi DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 int satir = 0; // SAY�SAL DE���KEN OLARAK satir DE�ER� TANIMLIYIYORUZ VE 0 A E��TL�YORUZ
 int sayi = 0; // SAY�SAL DE���KEN OLARAK sayi DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 int s = 40; // SAY�SAL DE���KEN OLARAK s DE�ER� TANIMLIYORUZ VE 40 A E��TL�YORUZ
 
 
 printf("\n Ne kadar cizgi kullanilsin: "); // KULLANICIDAN DE�ER ALMA
 scanf("%d",&cizgi); // DE�ER� HAFIZADA TUTMA
 
 if(cizgi > 20 ) // E�ER cizgi DE�ER� 20 DEN B�Y�KSE
 {
  printf("\n Cizgi sayisi cok fazla! "); // EKRANA YAZDIRMA
 }
 
 for(satir =1;satir<=cizgi;satir++) // satir DE�ER�N� 1 E E��TL�YORUZ satir DE�ER� cizgi DE�ER�NDEN K���K VE E��T OLANA KADAR satir DE�ER�N� 1 ARTTIR
 {
  bosluk(s); // 
 
  for(sayi= 1; sayi <= satir;sayi++) // sayi DE�ER�N� 1 E E��TL�YORUZ sayi DE�ER� satir DE�ER�NE K���K VE E��T OLANA KADAR SAY� DE�ER�N� 1 ARTTIRIYORUZ
  for(sayi= satir-1; sayi >= 1;sayi--) // sayi DE�ER�N� satir-1 DE�ER�NE E��TL�YORUZ sayi DE�ER� 1 DE�ER�NDEN B�Y�K VE E��T OLANA KADAR sayi DE�ER�N� 1 AZALTIYORUZ
 
  s = s - 2; // s DE�ER�N� s - 2 DE�ER�NE E��TL�YORUZ
 }
}
 
void bosluk(int t)
{
 int sayac = 0; // SAYISAL DE���KEN� OLARKA sayac DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 for(sayac = 1 ; sayac <= t;sayac++) // sayac DE�ER�N� 1 E E��TL�YORUZ sayac DE�ER� t DE�ER�NDEN K���K VE E��T OLANA KDAR sayac DE�ER�N� 1 ARTTIRIYORUZ
 putchar(' '); // CD DE���KEN DE�ER�N� EKRANA YAZAR
}
