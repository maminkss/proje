// Klavyeden girilen harfin sesli harf olup olmad���n� kontrol eden program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

main () {
	int karakter,seslimi=0; // DE�ER TANIMLAMA
    printf("Klavyeden bir harf girin:"); // KULLANICIDAN DE�ER ALMA
	scanf("%c" ,&karakter); // DE�ER� HAFIZADA TUTMA
    char sesli[]={'a','A','e','E','I','i','o','O','u','U'}; // KARAKTER TANIMLAMA
    
    for(int i=0;i<10;i++){ // D�NG� A�MA 
         if(karakter == sesli[i]){ // E�ER karakter == sesli[i] �SE
             seslimi++; // seslimi 1 ARTTIR
             break; // SON
         }
     }

     if(seslimi != 0) // seslimi 0'A E��T DE��L M�
         printf("%c harfi sesli harftir." ,karakter); // SONUCU EKRANA YAZDIRMA
     else // DE��LSE
         printf("%c harfi sesli harf degildir." ,karakter); // SONUCU EKRANA YAZDIRMA
	
}
