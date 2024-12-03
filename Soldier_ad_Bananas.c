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
    printf("%d\n", cost - n);
    
    // printf(" %d %d %d [cost: %d]\n", k, n, w, cost);
}