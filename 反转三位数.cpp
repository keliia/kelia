#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h;
    
    scanf("%d", &a);

    b = a / 100;
    d = a % 10;
    c = (a % 100 - d) / 10;

    e = d * 100;
    f = c * 10;
    g = b;
    h = e + f + g;

    printf("%d", h);
    return 0;
}
