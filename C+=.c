#include "stdio.h"

int main()
{
    int ln;
    int j = 0;
    int op;
    int i =0;
    int count;
    int cs = 0;
    scanf("%d", &ln);
    count = 3 * ln;
    int num[ln];
    while(i< count)
    {
        scanf("%d", &num[i]);
        i++;
    }
    while (cs < ln)
    {
        /* code */
        op = 0;
        while (num[j + 0] <= num[j + 2] && num[j + 1] <= num[j + 2])
        {
            if (num[j + 1] < num[j + 0])
            {
                num[j + 1] += num[j + 0];
                op++;
            }
            else
            {
                num[j + 0] += num[j + 1];
                op++;
            }
        }
        printf("operation %d\n", op);
        j += 3;
        cs++;
    }
    

}