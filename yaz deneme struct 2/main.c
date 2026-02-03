#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
    char ad[20];
    char soyad[20];
    float ort;

};

int main()
{
    struct ogrenci dizi[10];
    struct ogrenci yedek;

    for(int i=0;i<3;i++)
    {
        printf("%d. adi,soyadi,ortalamasini giriniz:",i+1);
        scanf("%s",dizi[i].ad);
        scanf("%s",dizi[i].soyad);
        scanf("%f",&dizi[i].ort);

    }

     for(int j=1;j<3;j++)
     {
         for(int i=0;i<2;i++)
         {
             if(strcmp(dizi[i].soyad,dizi[i+1].soyad)>0)
             {

                 yedek=dizi[i];
                 dizi[i]=dizi[i+1];
                 dizi[i+1]=yedek;

             }

         }


     }

      for(int i=0;i<3;i++)
      {
          printf("%s %s %f \n",dizi[i].ad,dizi[i].soyad,dizi[i].ort);
      }

    return 0;
}
