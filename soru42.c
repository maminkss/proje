// Kullan�c�n girece�i 5 sayiyi kullan�c�n�n istedi�i d�zende s�ralay�p ekrana listeyen program.

#include <stdio.h> // K�T�PHANE TANIMLAMA 
#include <conio.h> // K�T�PHANE TANIMLAMA

int main()
{

	int sayilar[5]; // SAYISAL DE���KEN� OLARAK sayilar DE�ER� TANIMLIYORUZ VE 5 KR�TER� BEL�RL�YORUZ
	int n = 0; // SAYISAL DE���KEN� OLARAK n DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
	int sayac = 0; // SAYISAL DE���KEN� OLARAK sayac DE�ER� TANIMLIYORUZ  VE 0 A E��TL�YORUZ
	int buyuk = 0; // SAYISAL DE���KEN� OLARAK buyuk DE�ER� TANIMLIYORUZ  VE 0 A E��TL�YORUZ
	int kucuk = 0; // SAYISAL DE���KEN� OLARAK kucuk DE�ER� TANIMLIYORUZ  VE 0 A E��TL�YORUZ
	int temp = 0; // SAYISAL DE���KEN� OLARAK temp DE�ER� TANIMLIYORUZ  VE 0 A E��TL�YORUZ
	char siralama; // KARAKTER DE���KEN� OLARAK siralama AD�NDA DE�ER TANIMLIYORUZ
	char devami; // KARAKTER DE���KEN� OLARAK devami AD�NDA DE�ER TANIMLIYORUZ
	
	do // D�NG�N�N BA�A SARMASINI SA�LAR
	{
		for(n = 0 ; n < 5 ; n++ ) // D�NG� A�IYORUZ n DE�ER�N� 0 A E��TL�YORUZ n DE�ER� 5 OLANA KADAR DE�ER� 1 ARTTIRIYORUZ
		{
		printf(" %d. sayi : ",n+1); // n+1 DE�ER�N� EKRANA %d KOMUTUYLA �A�IRIYORUZ
		scanf("%d",&sayilar[n]); // sayilar[n] DE�ER�N� EKRANA %d KOMUTUYLA �A�IRIYORUZ
		}
		
		printf("\n\nSiralama (D-Duz | T-Ters) : \n\n"); // KULLANICIDAN DE�ER ALIYORUZ
		scanf("%c",&siralama); // DE�ER� HAFIZADA TUTUYORUZ
		
		printf("\n\nSiralama oncesi. "); // EKRANA YAZDIRMA
		
		for(n=0 ; n < 5 ; n++) // n DE�ER�N� 0 A E��TL�YORUZ n DE�ER� 5 OLANA KADAR DE�ER� 1 ARTTIRIYORUZ
		{
			printf(" %d -> ",sayilar[n]); // sayilar[n] DE�ER�N� %d KOMUTUYLA EKRANA �A�IRIYORUZ
		}
		if( siralama == 'D' || siralama == 'd' ) // E�ER siralama DE�ER� D VEYA d �SE
		{
			for(buyuk=0; buyuk<4 ; buyuk++) // buyuk DE�ER�N� 0 A E��TL�YORUZ buyuk DE�ER� 4 DEN K���K OLANA KADAR buyuk DE�ER�N� 1 ARTTIRIYORUZ
			{
				for(kucuk = buyuk + 1; kucuk < 5; kucuk++) // kucuk DE�ER�N� buyuk + 1 DE�ER�NE E��TL�YORUZ kucuk DE�ER� 5 OLANA KADAR kucuk DE�ER�N� 1 ARTTIR
				{
					if(sayilar[buyuk] > sayilar[kucuk]) // E�ER sayilar[buyuk] DE�ER� sayilar[kucuk] DE�ER�NDEN B�Y�KSE
					{
						temp = sayilar[buyuk]; // temp DE�ER�N� sayilar[buyuk] DE�ER�NE E��TL�YORUZ
						sayilar[buyuk] = sayilar[kucuk]; // sayilar[buyuk] DE�ER�N� sayilar[kucuk] DE�ER�NE E��TL�YORUZ
						sayilar[kucuk] = temp; // sayilar[kucuk] DE�ER�N� temp DE�ER�NE E��TL�YORUZ
					}
				}
			}
		}
	else if( siralama == 'T' || siralama == 't') // DE��LSE E�ER siralama T VEYA t �SE
	{
		for( buyuk=0; buyuk<4; buyuk++) // buyuk DE�ER�N� 0 A E��TL�YORUZ buyuk DE�ER� 4 TEN K���K OLANA KADAR n DE�ER�N� 1 ARTTIRIYORUZ
		{
			for(kucuk = buyuk+1; kucuk<5; kucuk++) // kucuk DE�ER�N� buyuk + 1 DE�ER�NE E��TL�YORUZ kucuk DE�ER� 5 TEN K���K OLANA KADAR kucuk DE�ER�N� ARTTIRIYORUZ
			{
				if(sayilar[buyuk] < sayilar[kucuk]) // E�ER sayilar[buyuk] DE�ER� sayilar[kucuk] DE�ER�NDEN K���K �SE
				{
					temp = sayilar[buyuk]; // temp DE�ER�N� sayilar[buyuk] DE�ER�NE E��TL�YORUZ
					sayilar[buyuk] = sayilar[kucuk]; // sayilar[buyuk] DE�ER�N� sayilar[kucuk] DE�ER�NE E��TL�YORUZ
					sayilar[kucuk] = temp; // sayilar[kucuk] DE�ER�N� temp DE�ER�NE E��TL�YORUZ
				}
			}
		}
	}
	else // DE��LSE
	{
		printf("\n\nHATALI SIRALAMA! "); // EKRANA YAZDIRMA

	}
	
	printf("\n\nSiralamadan sonra "); // EKRANA YAZDIRMA
	
	for(n= 0 ; n < 5; n++) // n DE�ER�N� 0 A E��TL�YORUZ n DE�ER� 5 TEN K���K OLANA KADAR n DE�ER�N� 1 ARTTIRIYORUZ
	{
		printf(" %d -> ",sayilar[n]); // sayilar[n] DE�ER�N� EKRANA �A�IRIYORUZ %d KOMUTUYLA
	}
	
	printf("\n\nTekrar siralama yapmak istiyor musunuz : "); // EKRANA YADIRMA
	devami = getchar(); // devami DE�ER�N� klavyeden girilen char de�i�kenine atar
	}
	while(devami == 'E' || devami == 'e'); // KO�UL A�IYORUZ devami E VEYA e �SE
}
