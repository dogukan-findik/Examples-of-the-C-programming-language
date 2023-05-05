#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sifrele(char *kelime1,int anahtar)
{
  int boy=strlen(kelime1);

  for(int i=0;i<boy;i++)
  {
      if(anahtar==0)
      {
         int sifre=kelime1[i]+127;
        sifre=sifre%128;
        kelime1[i]=(char)sifre;
      }
      else
      {
          int sifre=kelime1[i]+anahtar;
          sifre%=128;
          kelime1[i]=(char)sifre;
      }

  }

}

 int sifre_anahtar(char *s1,char *ayrac)
 {
      char *kelime=strtok(s1,ayrac);
    int sayi;
    int key=0;

  while (kelime != NULL) {
        if (sscanf(kelime, "%d", &sayi) == 1) {

             key+=sayi;
        }
        kelime= strtok(NULL,ayrac);
    }
     return key;

 }


int main()
{

  char s1[1000];

  char sifreli_metin[1000]="";
  printf("sifrenelecek cumleyi giriniz:");
  fgets(s1,1000,stdin);

  int anahtar;
  char *ayrac=" ";
  int sayi;

  anahtar=sifre_anahtar(s1,ayrac);

    printf("Anahtar degeri: %d\n",anahtar);

    printf("sifrenelecek cumleyi tekrar girin");
    fgets(s1,1000,stdin);

    char *kelime1=strtok(s1,ayrac);



  while(kelime1!=NULL)
  {

    if(sscanf(kelime1,"%d",&sayi) == 1)
   {
    strcat(sifreli_metin,kelime1);
   }

      else
      {
          sifrele(kelime1,anahtar);
          sprintf(sifreli_metin+strlen(sifreli_metin)," %s ",kelime1);
      }
      kelime1=strtok(NULL,ayrac);
  }

  printf("sifreli metin:%s",sifreli_metin);




    return 0;
}
