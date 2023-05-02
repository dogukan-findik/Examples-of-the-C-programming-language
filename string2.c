#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main()
{
   const char *ayrac=" ";
    char cumle[100];
    printf("enter the sentence:");
    fgets(cumle,100,stdin);

    char *word=strtok(cumle,ayrac);

    int tmp=0;

    while(word!=NULL)
    {
        printf("%s\n",word);


         if(strlen(word)>tmp)
         {
            tmp=strlen(word);

         }
        word=strtok(NULL,ayrac);

    }

     printf("Size of the biggest word %d\n",tmp);



    return 0;
}
