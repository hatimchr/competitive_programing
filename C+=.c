#include "stdio.h"

int main()
{
    int ln;
    int op;
    int i =0;
    int count;
    int cs = 0;
    scanf("%d", &ln);
    count = 3;
    int num[ln];
    while (cs < ln)
    {
        /* code */
        op = 0;
        i = 0;
        while(i< count)
        {
            scanf("%d", &num[i]);
            i++;
        }
        while (num[0] <= num[2] && num[1] <= num[2])
        {
            if (num[1] < num[0])
            {
                num[1] += num[0];
                op++;
            }
            else
            {
                num[0] += num[1];
                op++;
            }
        }
        printf("%d", op);
        cs++;
    }
}