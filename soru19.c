// Basit d�rt i�lem ve moduler aritmetik islemi yapabilen program (SWITCH ile).

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 float sayi1 = 0; // ONDALIKLI DE�ER TANIMLAMA
 float sayi2 = 0; // ONDALIKLI DE�ER TANIMLAMA
 double sonuc = 0; // ONDALIKLI DE�ER TANIMLAMA
 char islem = ' '; // KARAKTER TANIMLAMA
 char oper = {'+','-','*','/'};
 
 
 printf("\n Basit Hesap Makinasi...");
 printf("\n =======================");
 
 printf("\n 1. sayi : ");
 scanf("%f",&sayi1);
 
 printf("\n 2. sayi : ");
 scanf("%f",&sayi2);
 
 printf("\n Yapilacak islem ( + - / * % ) : ");
 scanf("%c",&oper);
 
 switch(islem)
 {
  case '+': sonuc = sayi1 + sayi2; break;
  case '-': sonuc = sayi1 - sayi2; break;
  case '*': sonuc = sayi1 * sayi2; break;
  case '/': sonuc = sayi1 / sayi2; break;
}
 return 0;
}
