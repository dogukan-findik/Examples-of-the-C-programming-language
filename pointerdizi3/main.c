#include <stdio.h>
#include <stdlib.h>

void ekrana_yaz_3(int *baslangic, int *son)
{
int * p;
for (p = baslangic ; p <= son ; p++)
printf("%d\n", *p);
printf("\n");
}

int main()
{

    int dizi[7] = {0, 10, 20, 30, 40, 50, 60};
ekrana_yaz_3(dizi, &dizi[5]);
ekrana_yaz_3(dizi, &dizi[3]);
ekrana_yaz_3(dizi, dizi+3);

    return 0;
}
