#include <stdio.h>

int main()
{
    int tot;
    int i;
    scanf("%d\n", &tot);
    int card[tot];
    int ser, dima;
    ser =0;
    dima =0;
    for ( i = 0; i < tot; i++)
    {
        scanf("%d", &card[i]);
        /* code */
    }
    i = 0;
    while (i < tot)
    {
        if (card[i] < card[tot - 1])
        {
            ser += card[tot -1];
            tot--;
        }
        else
        {
            ser += card[i];
            i++;
        }
        if (i >= tot)
            break;
        if ( card[i] < card[tot - 1])
        {
            dima += card[tot -1];
            tot--;
        }
        else
        {
            dima += card[i];
            i++;
        }
        
    }
    printf("%d %d\n", ser, dima);
}