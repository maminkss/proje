// Bir dizi i�erisinde verilen sayilar arasindan aranan bir sayiyi bulan program

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10}; // SAY�SAL DE�ER�NDE DE�ER TANIMLAYIM 10 TANE SAY� BEL�RL�YORUZ  
 int aranan = 0; // SAYISAL DE�ER�NDE DE�ER TANIMLAMA
 int konum = 0; // SAYISAL DE�ER�NDE DE�ER TANIMLAMA
 int sayac = 0; // SAYISAL DE�ER�NDE DE�ER TANIMLAMA
 
 char bulundu = 'Y'; // KARAKTER DE�ER�NDE DE�ER TANIMLIYORUZ VE DE�ERE Y KR�KTER�N� VER�YORUZ
 
 printf("\n Liste icerisinde aranacak sayi : "); // KULLANICIDAN DE�ER ALMA
 scanf("%d",&aranan); // DE�ER� HAFIZADA TUTMA
 
 	for( sayac= 0; sayac < 10; sayac++ ) // D�NG� A�MA 
 	{
  	if( sayilar[sayac] == aranan ) // E�ER sayilar DE�ER� sayac Dizisi i�erisinde ve aranan DE�ER�N� E��TSE
  	{
   	bulundu = 'E'; //  bulundu DE�ER� E
   	konum = sayac + 1; // konum DE�ER�N� sayac + 1 EKLEY�P DE�ERE E��TL�YORUZ
   	break; // SON
  	}
 }
 
 if(bulundu == 'E' ) // E�ER bulundu == E �SE 
  printf("\n %d sayisi listenin %d. sirasinda.",aranan,konum); // EKRANA aranan ve konum DE�ER�N� �A�IRMA
 else // DE��LSE
  printf("\n %d sayisi gecerli degil.",aranan); // EKRANA aranan DE�ER�N� EKRANA �A�IRMA	
 
 return 0;
}
