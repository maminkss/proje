// Kullan�c�dan ya��n� sorarak ay,hafta,gun,saat,dakika ve saniye olarak hesaplayan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	int yas,ay,hafta,gun,saat,dakika,saniye; // DE�ER TANIMLAMA
	
	printf("Yasinizi giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&yas); // DE�ER� HAFIZADA TUTMA
	
	ay = yas * 12; // AY HESAPLAMA
	hafta = yas * 7; // HAFTA HESAPLAMA
	gun = yas * 365; // G�N HESAPLAMA
	saat = yas * 365 * 24; // SAAT HESAPLAMA
	dakika = yas * 365 * 24 * 60; // DAK�KA HESAPLAMA
	saniye = yas * 365 * 24 * 60 * 60; // SAN�YE HESAPLAMA
	
	printf("Ay : %d\n",ay); // AY SONUCUNU EKRANA YAZDIRMA
	printf("Hafta : %d\n",hafta); // HAFTA SONUCUNU EKRANA YAZDIRMA
	printf("Saat : %d\n",saat); // SAAT SONUCUNU EKRANA YAZDIRMA 
	printf("Dakika  : %d\n",dakika); // DAK�KA SONUCUNU EKRANA YAZDIRMA
	printf("Saniye  : %d\n",saniye); // SAN�YE SONUCUNU EKRANA YAZDIRMA
	printf("Gun  : %d",gun); // G�N SONUCUNU EKRANA YAZDIRMA
	
	return 0;
}
