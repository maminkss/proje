// Girilen bir sayidaki rakamlar�n toplaman� bulan program

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main() 
{
 int sayi = 0; // SAYISAL DE�ER TANIMLAMA VE 0 A E��TLEME
 int rakam = 0; // SAYISAL DE�ER TANIMLAMA VE 0 A E��TLEME
 int toplam = 0; // SAYISAL DE�ER TANIMLAMA VE 0 A E��TLEME
 
 printf("\nBir Sayi Giriniz : "); // KULLANICIDAN DE�ER ALMA
 scanf("%d",&sayi); // DE�ER� HAFIZADA TUTMA
 
 while( sayi > 0 ) // WH�LE D�NG�S�YLE sayi > 0 KO�UNU KOYMA
 {
  rakam = sayi%10; // rakam DE�ER�N� sayi DE�ER�N�N 10 MODUNU ALMA
  toplam = toplam + rakam; // toplam DE�ER�N� toplam DE�ER� �LE rakam DE�ER�N� TOPLAYIP DE�ERE E��TL�YORUZ
  sayi = sayi/10; // sayi DE�ER�N� sayi / 10 DE�ER�NE E��TLEME
 }
 
 printf("\nSayidaki rakamlarin toplami %d",toplam); // TOPLAM SONUCUNU EKRANA YANSITIYORUZ
 
 return 0;
}
