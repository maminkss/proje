// girilen bir sayinin faktoriyelini hesaplayan program

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	
	int sayi,n, sonuc=1; // SAYISAL DE���KEN OLARAK sayi, n ve sonuc DE�ER� TANIMLIYORUZ sonuc DE�ER�N� 1 E E��TL�YORUZ
	
	printf("Bir sayi giriniz: \n"); // KULLANICIDAN DE�ER ALIYORUZ
	scanf("%d",&sayi); // DE�ER� HAFIZADA TUTUYORUZ
	
	for(n = 1; n <= sayi; n++) { // D�NG� A�IYORUZ n DE�ER�N� 1 E E��TL�YORUZ n DE�ER� sayi DE�ER�NDEN K���K VE E��T OLANA KADAR n DE�ER�NE 1 ARTTIRIYORUZ
		sonuc = sonuc * n; // sonuc DE�ER�N� sonuc * n �ARPTIKTAN SONRA
	}
	
	printf("\n %d = %d ",sayi,sonuc); // sayi VE sonuc DE�ERLER�N� EKRANA GET�R�YORUZ %d Komutu ile
	return 0;
}
