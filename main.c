#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
   char tmp[100];
   char str[5][100];
    int i;


   printf("Enter the groups of words:");
   for(int i=0;i<5;i++)
   {

   gets(str[i]);
   }

   printf("Groups of words to be sorted:");
   for(i=0;i<5;i++)
   {

   puts(str[i]);
   }
   printf("\n\n");

   for(i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           if(strcmp(str[j],str[j+1])==1)
              {
                strcpy(tmp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],tmp);
              }

       }
   }
   for(i=0;i<5;i++)
   {
       printf("%s\n",str[i]);
   }



    return 0;
}

