// Bir ��genin girilen �� kenar�na g�re ��gen t�r�n� bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	
	int kenar1=0, kenar2=0, kenar3=0; // DE�ER TANIMLAMA
	
	printf("1. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&kenar1); // DE�ER� HAFIZADA TUTMA
	
	printf("2. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&kenar2); // DE�ER� HAFIZADA TUTMA
	
	printf("3. Kenar uzunlugunu giriniz : \n"); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&kenar3); // DE�ER� HAFIZADA TUTMA
	
	if(kenar1 == kenar2 && kenar2 == kenar3) { // E�ER kenar1 == kenar2 VE kenar2 == kenar3 �SE
		printf("Tum Kenarlar Esit.\n"); // EKRANA YAZDIRMA
		printf("ESKENAR UCGEN"); // EKRANA YAZDIRMA
	}
	else if(kenar1 == kenar2 || kenar2 == kenar3 || kenar1 == kenar3){ // E�ER kenar1 == kenar2 VEYA kenar2 == kenar3 VEYA kenar1 == kenar3
		printf("Iki Kenar Esit.\n"); // EKRANA YAZDIRMA
		printf("IKIZKENAR UCGEN"); // EKRANA YAZDIRMA
	}
	else { // DE��LSE
		printf("Kenarlar Esit Degil.\n"); // EKRANA YAZDIRMA
		printf("KARMA UCGEN"); // EKRANA YAZDIRMA
	}
	
	return 0;
}
