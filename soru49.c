// 10 Karaktere kadar bir kelime girilmesini isteyen ve ekrana yazd�ran program.

#include <stdio.h> // K�T�PHANE TANIMLAMA
#include <conio.h> // K�T�PHANE TANIMLAMA
 
int main()
{
      char kelime[10]; // KARAKTER TANIMLAMA VE KARAKTERE 10 HARFL�K SINIR BEL�RLEME
 
      printf("\n Kelimeyi girin : "); // KULLANICIDAN DE�ER ALMA
      gets(kelime); // KLAVYEDEN G�R�LEN STR �LE G�STER�LEN KARAKTER D�Z�S�NE YAZAR
 
      printf("\n Girilen Kelime : %s",kelime); // kelime DE�ER�N� EKRANA YAZDIRMA
      return 0;
}
