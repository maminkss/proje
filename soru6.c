// Yar��ap� girilen dairenin alan� ve �evresini hesaplayan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <math.h> // K�T�PHANE TANIMLAMA

int main () {
	int yaricap; // DE�ER TANIMLAMA 
	float pi=3.14,alan,cevre; // DE�ER TANIMLAMA
	
	printf("Yari Capi giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&yaricap); // DE�ER� HAFIZADA TUTMA
	
	alan = pi* (pow(yaricap,2)); // DA�REN�N ALANININ FORM�L�
	printf("Dairenin Alani : %f\n",alan); // DA�REN�N ALANININ SONUCUNU EKRANA YAZDIRMA
	
	cevre = 2 * pi * yaricap; // DA�REN�N ALANININ FORM�L�
	printf("Dairenin Cevresi : %f",cevre); // DA�REN�N CEVRES�N�N SONUCUNU EKRANA YAZDIRMA
	
	return 0;
}
