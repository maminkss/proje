// Koordinatlar� verilen iki nokta aras�ndaki mesafeyi bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
#include <math.h> // K�T�PHANE TANIMLAMA
 
int main()
{
 int x1 = 0, y1 = 0; // SAYISAL DE���KEN OLARAK x1 y1 DE�ERLER� TANIMLAYIP 0 A E��TL�YORUZ
 int x2 = 0, y2 = 0; // SAYISAL DE���KEN OLARAK x2 y2 DE�ERLER� TANIMLAYIP 0 A E��TL�YORUZ
 float mesafe = 0 ; // ONDALIKLI SAYI DE���KEN� OLARAK mesafe DE�ER� TANIMLIYORUZ VE 0 A E��TL�YORUZ
 
 printf("\n 1. Nokta (X Y): "); // KULLANICIDAN DE�ERLER� ALIYORUZ
 scanf("%d %d",&x1,&y1); // DE�ERLER� HAFIZADA TUTUYORUZ
 
 printf("\n 2. Nokta (X Y): "); // KULLANICIDAN DE�ERLER� ALIYORUZ
 scanf("%d %d",&x2,&y2); // DE�ERLER� HAFIZADA TUTUYORUZ
 
 mesafe = sqrt(pow((y2-y1),2) + pow((x2-x1),2)); // sqrt KOMUTUYLA KAREK�K DE�ERLER�N� ALIYORUZ �NCEL�KLE DAHA SONRASINDA pow KOMUTUNU KULLANARAK DE�ERLER�N KARES�NE ALIYORUZ DAHA SONRA 4 ��LEM OLARKA DE�ELER�N ��LEMLER�N� YAPIYORUZ DAHA SONRA BU DE�ERLER�N SONUCUNU 
 // mesafe DE�ER�NE E��TL�YORUZ
 printf("\n Mesafe : %.2f",mesafe); // mesafe DE�ER�N� EKRANA �A�IRIYORUZ 2f YAPMAMIZIN SEBEB� V�RG�LDEN SONRA KA� BASAMA�IN G�Z�KMES�N� G�STER�YORUZ   
 
 return 0;
}
