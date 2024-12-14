#include <stdio.h>

int main()
{
    int tot;
    int i;
    int oficer = 0;
    int untreated = 0;
    scanf("%d\n", &tot);
    int input[tot];
    for ( i = 0; i < tot; i++)
    {
        scanf("%d", &input[i]);
        if (input[i] == -1)
        {
            if (!oficer)
            {
                untreated++;
            }
            else
            {
                oficer--;
            }
            
        }
        else
            oficer += input[i]; 
    }
    printf("%d\n", untreated);
}