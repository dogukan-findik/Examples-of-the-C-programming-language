#include <stdio.h>
#include <stdlib.h>

int main()
{

    char kelime[20]="kitap";
    char *kp=&kelime;

    printf("adres:%x\n",kp);

    kp++;
    printf("yeni adres:%x\n",kp);

    kp=kp+5;
    printf("adres:%x",kp);





    return 0;
}
