// 1den 25e ileri ve 25den 1e geri sayan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	
	int sayi; // DE�ER TANIMLAMA
	
	printf("1-25 SAYIM\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=1;sayi<=25;sayi++) { // D�NG� A�MA SAYIYI 1 DEN BA�LATIP 25 E KADAR 1 ARTTIRMA
		printf("sayi: %d \n",sayi); // SAY�Y� EKRANDA G�STERME
	}
	
	printf("\n25-1 SAYIM\n"); // EKRANA YAZDIRMA
	printf("-------------------------\n"); // EKRANA YAZDIRMA
	
	for(sayi=25;sayi>=1;sayi--) { // D�NG� A�MA SAYIYI 25 DEN BA�LATIP 1 E KADAR 1 AZALTMA
		printf("sayi: %d\n",sayi); // SAY�Y� EKRANDA G�STERME
	}
	
	return 0;
}
