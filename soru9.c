// Girilen bir sayinin tek veya �ift sayi oldu�unu bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	int sayi; // DE�ER TANIMLAMA
	
	printf("Bir sayi giriniz :"); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&sayi); // DE�ER� HAFIZADA TUTMA
	
	if(sayi % 2 == 0 ) // SAY� E�ER 2 YE TAM B�L�N�YORSA
		printf("Girdiginiz sayi CIFTTIR! : %d",sayi); // EKRANA YAZDIRMA 
	
	else // DE��LSE
		printf("Girdiginiz sayi TEKTIR! : %d",sayi); // EKRANA YAZDIRMA
		
	return 0;
}
