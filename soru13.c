// Girilen yilin art�k y�l olup olmad���n� tespit eden program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main() {
	int yil; // DE�ER TANIMLAMA
	printf("Yil Giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&yil); // DE�ER� HAFIZADA TUTMA
	
	if(yil % 4 == 0) // E�ER yil 4'E TAM B�L�N�YORSA
	{
		if(yil % 100 == 0) // E�ER yil 100'E TAM B�L�N�YORSA
		{
			if(yil % 400 == 0) // E�ER yil 400'E TAM B�L�N�YORSA
				printf("%d artik yildir.",yil); // SONUCU EKRANA YAZDIRMA
			else // DE��LSE
				printf("%d artik yil degildir.",yil); // SONUCU EKRANA YAZDIRMA
		}
		else // DE��LSE
			printf("%d artik yildir.",yil); // SONUCU EKRANA YAZDIRMA
	}
	else // DE��LSE
		printf("%d artik yil degildir.",yil); // SONUCU EKRANA YAZDIRMA
		
	return 0;
}
