// girilen bir sayinin asal sayi olup olmadigini bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() 
{
      
       int sayi,n = 0, i ; // DE�ER TANIMLAMA
       
       printf("Bir sayi giriniz:"); // KULLANICIDAN DE�ER ALMA
       scanf("%d", &sayi); // DE�ER� HAFIZADA TUTMA
       for( i = 2; i <= sayi/2; i++) { // D�NG� A�MA i=2 i <= sayi/2 i++
         if(sayi % i == 0) { // E�ER sayi i'YE TAM B�L�N�YORSA
           n = 1; // DE�ER TANIMLAMA
           break; // SON
         }
       } 
       if(n == 0) // E�ER n == 0 �SE
          printf("Sayi Asaldir\n"); // SONUCU EKRANA YAZDIRMA
       else // DE��LSE
          printf("Sayi Asal Degildir\n"); // SONUCU EKRANA YAZDIRMA
       return 0;
}
