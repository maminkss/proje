// Kullan�c�dan gidilecek mesafe ve var�� zaman�n� sorarak almas� gereken h�z� hesaplayan program. 

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main () {
	int mesafe,zaman,hiz; // DE�ER TANIMLAMA
	
	printf("Gidilecek mesafeyi giriniz (km) : "); // KULLANICIDAN DE�ER ALMA 
	scanf("%d",&mesafe); // DE�ER� HAFIZADA TUTMA
	
	printf("Gitmek istediginiz zamani yazin (s) : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&zaman); // DE�ER� HAFIZADA TUTMA
	
	hiz = mesafe / zaman ; // HIZ FORM�L� 
	
	printf("Istediginiz zamanda olmaniz icin gitmeniz gereken hiz :  %d",hiz); // SONUCU EKRANA YAZDIRMA
	
	return 0;
}
