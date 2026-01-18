#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, kalan, b1, b2, b3, b4, sum;

    sum = 0;

    for (i = 1000; i <= 9999; i++)
    {

        b1 = i / 1000;
        kalan = i % 1000;

        b2 = kalan / 100;
        kalan = kalan % 100;

        b3 = kalan / 10;
        kalan = kalan % 10;

        b4 = kalan;

        if (b1 + b2 == b3 + b4)
        {
            sum++;
        }
    }
    printf("sonuc: %d", sum);

    return 0;
}
