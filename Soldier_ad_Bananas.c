#include <stdio.h>

int main()
{
    int k, n, i, w;
    int cost = 0;
    scanf("%d %d %d", &k, &n, &w);
    for ( i = 0; i <= w; i++)
    {
        cost = cost + (i * k);
    }
    if (cost > n)
    {
        printf("%d\n", cost - n);
        /* code */
    }
    else
        printf("%d\n", 0);

    
    
    // printf(" %d %d %d [cost: %d]\n", k, n, w, cost);
}