// girilen bir sayi icin carpim tablosunu yazdiran program

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main()
{
   int n, i; // DE�ER TANIMLAMA
   printf("Bir sayi giriniz = "); // KULLANICIDAN DE�ER ALMA
   scanf("%d",&n); // DE�ER� HAFIZADA TUTMA
   for(i=1; i<=10; ++i) // D�NG� A�MA i=1 i<=10 VE i Y� 1 ARTTIMA 
   {
      printf("%d * ", n); // KULLANICININ YAZDIGI DEGERI EKRANA YAZDIRMA
      printf("%d",i); // DONGUDEKI i YI EKRANA YAZDIRMA
      printf(" = %d \n", n*i); // KULLANICININ G�RD��� DE�ER� D�NG�DEK� SAYI �LE �ARPIP EKRANA YAZDIRMA
   }
   
   return 0;
}
