// Kullan�c�dan iki sayi girmesini isteyen ve sayilarin b�y�kl���n� kar��la�t�ran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

main () {
	float sayi1,sayi2; // DE�ER TANIMLAMA
	
	printf("1. Sayiyi giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%f",&sayi1); // DE�ER� HAFIZADA TUTMA
	
	printf("2. Sayiyi giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%f",&sayi2); // DE�ER� HAFIZADA TUTMA
	
	if(sayi1 > sayi2) // sayi1 sayi2'DEN B�Y�K �SE
		printf("1. Sayi 2. Sayidan BUYUKTUR!"); // EKRANA YAZDIRMA
	else if(sayi2 > sayi1) // sayi2 sayi1'DEN B�Y�K �SE
		printf("2. Sayi 1. Sayidan BUYUKTUR !"); // EKRANA YAZDIRMA
	else // DE��L �SE
		printf("Sayilar birbirine ESSITTR!"); // EKRANA YAZDIRMA

}
