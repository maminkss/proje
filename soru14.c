// Girilen bir nota kar��l�k gelen durummu yazd�ran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() 
{
	float not1; // DE�ER TANIMLAMA
	
	printf("Notunuzu Giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%f",&not1); // DE�ER� HAFIZADA TUTMA
	
	if(not1 >= 50) // E�ER not1 50'DEN B�Y�K VE 50 YE E��TSE 
		printf("GECTI"); // EKRANA YAZDIRMA
	else //DE��LSE
		printf("KALDI"); // EKRANA YAZDIRMA		
	
	return 0;
}
