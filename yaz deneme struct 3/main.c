#include <stdio.h>
#include <stdlib.h>

struct zaman
{
    int saat;
    int dakika;
    int saniye;
};

struct zaman yeni_zaman(struct zaman top, int san)
{
    int sayi = san /60;
    int sayi1 = san %60;
    top.dakika=top.dakika + sayi;
    top.saniye=top.saniye + sayi1;

    if (top.saniye >=60)
    {
        top.saniye = top.saniye%60;
        top.dakika++;

        if (top.dakika >= 60)
        {
            top.saat++;
            top.dakika = top.dakika%60;

            if (top.saat >= 24)
            {
                top.saat = top.saat % 24;
            }
        }
    }

    return top;
}

int main()
{
    struct zaman deger;
    int miktar;

    printf("Zaman degerini giriniz (saat:dakika:saniye): ");
    scanf("%d:%d:%d", &deger.saat, &deger.dakika, &deger.saniye);

    printf("Zamanın ustune eklenecek saniye miktarini girin: ");
    scanf("%d", &miktar);

    deger = yeni_zaman(deger, miktar);

    printf("Yeni zaman: %02d:%02d:%02d\n",deger.saat,deger.dakika,deger.saniye);

    return 0;
}




