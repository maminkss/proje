// Kullan�c�dan iki sayi girmesini isteyen ve bu iki sayinin toplamlarini ekrana yazd�ran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

main () {
	int sayi1, sayi2,toplam; // DE�ER TANIMLAMA
	
	printf("1. sayi giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&sayi1); // DE�ER� HAFIZADA TUTMA
	
	printf("2. sayi giriniz : "); // KULLANICIDAN DE�ER ALMA 
	scanf("%d",&sayi2);	// DE�ER� HAFIZADA TUTMA
	
	toplam = sayi1 + sayi2; // TOPLAMA ��LEM� 
	
	printf("Toplam : %d",toplam); // SONUCU EKRANA YAZDIRMA
}
