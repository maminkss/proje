// Ya�� girilen bir ki�inin se�imlerde oy verme yeterlili�i olup olmad���n� test eden program.

#include <stdio.h> // K�T�PHANE TANIMLAMA

int main () {
	int yas; // DE�ER TANIMLAMA
	printf("Yasinizi giriniz : "); // KULLANICIDAN DE�ER ALMA
	scanf("%d",&yas); // DE�ER� HAFIZADA TUTMA
	
	if(yas > 18) // E�ER yas 18'DEN B�Y�K �SE
		printf("SECIMLERDE OY KULLANABILIRSINIZ!"); // EKRANA YAZDIRMA
	else // DE��L �SE
		printf("SECIMLERDE OY KULLANAMAZSINIZ!"); // EKRANA YAZDIRMA
	
	return 0;
}
