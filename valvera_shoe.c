#include <stdio.h>

int main()
{
    int shoes[4];
    int num_count = 0;
    int i = 0;
    int j = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &shoes[i]);
    }
    i = 0;
    while (i <= 2)
    {
        j = 1;
        while ((i + j < 4))
        {
            if (shoes[i] == shoes[i + j])
            {
                num_count++;
                break;
            }
            j++;
        }
        i++;
    }
    printf("%d", num_count);
    return 0;
}