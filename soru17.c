// Girilen bir ya�a kar��l�k gelen hayat dilimini ekrana veren program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	int yas = 0 ; // DE�ER TANIMLAMA
	
	printf("Yasinizi Giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&yas); // DE�ER� HAFIZADA TUTMA
	
  	if( yas >= 1 && yas <= 4) // E�ER yas >= 1 VE yas <= 4 �SE
 	 	printf("Bebeklik Donemi\n"); // SONUCU EKRANA YAZDIRMA
 	else if( yas > 4 && yas <= 14 ) // DE��LSE E�ER yas > 4 VE yas <= 14 
  		printf(" Ilkogretim Donemi\n"); // SONUUCU EKRANA YAZDIRMA
 	else if( yas > 14 && yas <= 21 ) // DE��LSE E�ER yas > 14 VE yas <= 21 �SE
  		printf(" Yuksek Ogretim Donemi\n"); // SONUCU EKRANA YAZDIRMA
 	else if( yas > 21 && yas <= 60 ) // DE��LSE E�ER yas > 21 VE yas <= 60 
  		printf("Is Hayati\n"); // SONUCU EKRANA YAZDIRMA
 	else if( yas > 60 ) // DE��LSE E�ER yas > 60
  		printf("Emeklilik Donemi\n"); // EKRANA YAZDIRMA
 	else // DE��LSE
  		printf("\n Gecersiz Yas..."); // EKRANA YAZDIRMA
  		
  	return 0;
}
