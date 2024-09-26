#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, s=0, m;
    int d= 0;
    do
    {
        printf("qual a temperatura? ");
        scanf("%f", &t);
        if ( t >= -15 && t <= 5)
        {
            s = s + t;
            d++;
        }
    }
    while( t >= -15 && t <= 5);


    printf("a media do inverno foi:%.2f\n", s/d);
    return 0;
}
