#include <stdio.h>
#include <stdlib.h>

int main()
{

  int satir,sutun;
  int i,j;

  printf("sutun sayisini giriniz:");
  scanf("%d",&sutun);
  printf("satir sayisisni giriniz:");
  scanf("%d",&satir);

  for(i=1;i<=satir;i++)
  {
      for(j=1;j<=sutun;j++)
      {
          printf("%d\t",i*j);
      }
      printf("\n");
  }

int sat,sut;

for(sat=1;sat<=6;sat++)
{
    for(sut=1;sut<=6-sat;l++)
    {
        printf(".");
    }
    for(sut=1;sut<=sat;sut++)
    {
        printf("x");
    }
    printf("\n");
}







    return 0;
}



