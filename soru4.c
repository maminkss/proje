// Bir kenar� girilen alan� ve �evresini hesaplayan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main () {
	int kenar,alan,cevre; // DE�ER TANIMLAMA
	printf("Karenin bir kenar uzunlugunu giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&kenar); // DE�ER� HAFIZADA TUTMA
	
	alan = kenar * kenar; // KAREN�N ALAN FORM�L�
	cevre = kenar * 4; // KAREN�N CEVRE FORMUL� 
	
	printf("Karenin Alani : %d\n",alan); // KAREN�N ALANININ SONUCUNU EKRANA YAZDIRMA
	printf("Karenin Cevresi :  %d",cevre); // KAREN�N CEVRES�N�N SONUCUNU EKRANA YAZDIRMA
	
	return 0;
}
