// kullaniciya medeni halini evli ise kac cocugu oldugunu soran ve gerekli mesaji veren program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	
	char evli = ' '; // KARAKTER TANIMLAMA
	int cocuk = 0; // SAY� DE�ER TANIMLAMA
	printf("Evli Misiniz? (E/H?)\n"); // KULLANICIDAN DE�ER ALMA
	scanf("%c",&evli); // DE�ER� HAFIZADA TUTMA
	
	if(evli == 'E' || evli == 'e') { // E�ER KULLANICI "E" VEYA "e" YAZARSA
		printf("Kac cocugunuz var?\n"); // KULLANICIDAN DE�ER ALMA
		scanf("%d",&cocuk); // DE�ER� HAFIZADA TUTMA
	
	if(cocuk > 2) // E�ER cocuk > 2 B�Y�KSE
		printf("\nBuyuk bir aileye sahipsiniz :)"); // EKRANA YAZDIRMA
	else // DE��LSE
		printf("\nKucuk bir aileye sahipsiniz :)"); // EKRANA YAZDIRMA
	}
	else if(evli == 'H'|| evli == 'h') // DE��LSE E�ER "H" VEYA "h" YAZARSA
		printf("Evli degilseniz. iyi g�nler :) \n"); // EKRANA YAZDIRMA
	else //DE��LSE
		printf("HATA"); // EKRANA YAZDIRMA
		
	return 0;
}
