// Haftan�n g�n numaras�na kar��l�k gelen g�n ad�n� veren program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	int guno; // DE�ER TANIMLAMA //
	
	printf("1 - PAZARTESI\n"); // G�NLER //
	printf("2 - SALI\n");	   // G�NLER //
	printf("3 - CARSAMBA\n");  // G�NLER //
	printf("4 - PERSEMBE\n");  // G�NLER //
	printf("5 - CUMA\n");	   // G�NLER //
	printf("6 - CUMARTESI\n"); // G�NLER //
	printf("7 - PAZAR\n");	   // G�NLER //
	
	printf("Hafta Gun Numarasini Giriniz : ");	// EKRANDA KULLANICIDAN DE�ER ALMA //
	scanf("%d",&guno);	// INT DE�ER� HAFIZADA TUTMA //
	

	if(guno == 1)  // E�ER KLAVYEDEN 1'E BASARSA //
		printf("PAZARTESI"); // EKRANA YAZDIRMA //
	else if(guno == 2)	// E�ER KLAVYEDEN 2'YE BASARSA
		printf("SALI");		 // EKRANA YAZDIRMA //
	else if(guno == 3) // E�ER KLAVYEDEN 3'E BASARSA //
		printf("CARSAMBA");	 // EKRANA YAZDIRMA //
	else if(guno == 4)	// E�ER KLAVYEDEN 4'E BASARSA //
		printf("PERSEMBE");  // EKRANA YAZDIRMA //
	else if(guno == 5)	// E�ER KLAVYEDEN 5'E BASARSA //
		printf("CUMA");		 // EKRANA YAZDIRMA //
	else if(guno == 6)	// E�ER KLAVYEDEN 6'YA BASARSA //
		printf("CUMARTESI"); // EKRANA YAZDIRMA //
	else if(guno == 7)	// E�ER KLAVYEDEN 7'YE BASARSA //
		printf("PAZAR");	 // EKRANA YAZDIRMA //
		
	return 0;
}

