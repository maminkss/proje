// Bir sayi girilmesini isteyen ve girilen sayiyi ekrana yazdiran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA 

main () {
	int sayi; // DE�ER TANIMLAMA 
	printf("Lutfen bir sayi giriniz : "); // KULLANICIDAN DE�ER G�RME
	scanf("%d",&sayi);	// DE�ER� HAFIZADA TUTMA 
	
	printf("Girdiginiz sayi : %d",sayi); // SONUCU EKRANA YAZDIRMA 
}
