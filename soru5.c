// iki kenar� girilen dikd�rtgenin karesi ve �evresini bulan program.

#include <stdio.h> // K�T�PHANE TANILAMA

main () {
	int kisakenar,uzunkenar,alan,cevre; // DE�ER TANIMLAMA 
	
	printf("Kisa kenari giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&kisakenar); // DE�ER� HAFIZADA TUTMA
	
	printf("Uzun kenari giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&uzunkenar); // DE�ER� HAFIZADA TUTMA
	
	alan = kisakenar * uzunkenar; // D�KD�RTGENN�N ALAN FORM�L�
	cevre = 2 * (kisakenar + uzunkenar); // D�KD�RTGEN�N CEVRE FORM�L�
	
	printf("Dikdortgenin Alani : %d\n",alan); // D�KD�RTGEN�N ALANININ SONUCUNU EKRANA YAZDIRMA
	printf("Dikdortgenin Cevresi : %d",cevre); // D�KD�RTGEN�N CEVRES�N�N SONUCUNU EKRANA YAZDIRMA
}
