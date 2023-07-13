#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char s[100];
   int a;
   int sayac=0;
   int i=0;
  int c;

   printf("kelimeyi giriniz:");
   fgets(s,100,stdin);

   a=strlen(s);
   a=a-2;
    c=a/2;

               while( s[i]==s[a-i] && i<c)
               {
                   sayac++;
                   i++;
               }

                if(sayac==c)
                   {
                    printf("bu kelime palindromdur");
                   }

               else
               {
                    printf("bu kelime palindrom degildir:");
               }


    return 0;
}
