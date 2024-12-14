#include <stdio.h>

int main()
{
    int tot;
    int cnt = 0;
    scanf("%d\n", &tot);
    char    colr[tot];
    for (int i = 0; i < tot; i++)
    {
        scanf("%c", &colr[i]);
        if (i && colr[i] == colr[i -1])
            cnt++;
    }
    printf("%d\n", cnt);

}