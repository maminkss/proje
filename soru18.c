// Basit d�rt i�lem ve mod�ller aritmetik i�lemini yapabilen program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	
	float sayi1,sayi2,bolme; // ONDALIKLI DE�ER TANIMLAMA
	int toplama,cikarma,carpma; // DE�ER TANIMLAMA
	
	printf("1. Sayiyi Giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%f",&sayi1); // DE�ER� HAFIZADA TUTMA
	
	printf("2. Sayiyi Giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%f",&sayi2); // DE�ER� HAFIZADA TUTMA 
	
	toplama = sayi1+sayi2; // TOPLAMA ��LEM�
	printf("Toplam: %d \n",toplama); // SONUCU EKRANA YAZDIRMA
	
	cikarma = sayi1-sayi2; // �IKARMA ��LEM�
	printf("Cikarma: %d \n",cikarma); // SONUCU EKRANA YAZDIRMA
	
	carpma = sayi1*sayi2; // �ARPMA ��LEM�
	printf("Carpma: %d \n",carpma); // SONUCU EKRANA YAZDIRMA
	
	bolme = sayi1/sayi2; // B�LME ��LEM�
	printf("Bolme: %f \n",bolme); // SONUCU EKRANA YAZDIRMA
	
	return 0;
}
