// Girilen matrisin simetrik olup olmad���n� bulan program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      int matris[3][3]; // SAYISAL DE���KEN OLARAK matris DE�ER� TANIMLIYORUZ VE 3 KR�TERLER�N� BEL�RL�YORUZ
      int satir = 0, sutun = 0; // SAYISAL DE���KEN OLARAK satir ve sutun DE�ER� TANIMLIYORUZ 0 A E��TL�YORUZ
      char simetrik = 'E'; // KARAKTER DE���KEN� OLARAK simetrik DE�ER�N� E KR�TER� BEL�RL�YORUZ
 
      printf("\n Matrisin degerlerini giriniz : "); // KULLANICIDAN DE�ER ALIYORUZ
 
      for( satir= 0 ;  satir < 3; satir++ ) // satir DE�ER�N� 0 A E��TL�YORUZ satir DE�ER� 3 OLANA KADAR satir DE�ER�N� 1 ARTTIRIYORUZ
      {
            for ( sutun = 0; sutun < 3; sutun++ ) // sutun DE�ER�N� 0 A E��TL�YORUZ sutun DE�ER� 3 OLANA KADAR sutun DE�ER�N� 1 ARTTIRIYORUZ
            {
                printf("\n Deger [%d][%d] : ",satir+1,sutun+1); // satir DE�ER�NE VE sutun DE�ER�NE 1 ARTTIRIYORUZ EKRANDA G�STER�YORUZ
                scanf("%d",&matris[satir][sutun]); // DE�ERLER� HAFIZADA TUTUYORUZ
            }
      }
 
 
      for( satir= 0 ;  satir < 3; satir++ ) // satir DE�ER�N� 0 A E��TL�YORUZ satir DE�ER� 3 OLANA KADAR satir DE�ER�NE 1 ARTTIRIYORUZ
      {
            for ( sutun = 0;sutun < 3;sutun++ ) // sutun DE�ER�N� 0 A E��TL�YORUZ sutun DE�ER� 3 OLANA KADAR sutun DE�ER�NE 1 ARTTIRIYORUZ
            {
                  if( satir != sutun ) // E�ER satir DE�ER� sutun DE�ER�NE E��T DE��LSE
                {
                    if( matris[satir][sutun] != matris[sutun][satir] ) // E�ER matris[satir][sutun] DE�ER� matris[sutun][satir] DE�ER�NE E��T DE��LSE
                    {
                        simetrik = 'H'; // simetrik DE�ER�N� H OLARAK TANIMLIYORUZ
                        break;
                    }
                }
            }
      }
 
 
      if(simetrik == 'E' ) // E�ER simetrik DE�ER� E �SE
          printf("\n Matris Simetriktir."); // EKRANA YAZDIRMA
      else // DE��LSE
          printf("\n Matris Simetrik Degildir."); // EKRANA YAZDIRMA
 
    return 0;
}
