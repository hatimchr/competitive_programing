#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int x = 0;
    int k = 0;
    int math = 0;
    int code = 0;
    int pe = 0;
    int teams = 0;
    int n_student;
    int student[5000];
    scanf("%d", &n_student);
    for (int i = 0; i < n_student; i++)
    {
        if (scanf("%d", &student[i]) != 1) {
            printf("Error reading input.\n");
            return 1;
        }
    }
    i =0;
    int ma_index[n_student];
    int co_index[n_student];
    int pe_index[n_student];
    while (student[i])
    {
        if (student[i] == 1)
        {
            code++;
            co_index[j] = i;
            j++;
        }
        if (student[i] == 2)
        {
            math++;
            ma_index[k] = i;
            k++;
        }
        if (student[i] == 3)
        {
            pe_index[x] = i;
            pe++;
            x++;
        }
        i++;
    }
    if (math < code)
    {
        if (math < pe)
        {
            teams = math;
        }
        else
            teams = pe;
    }
    else
    {
        if (code < pe)
        {
            teams = code;
        }
        else
            teams = pe;
    }
    printf("%d\n", teams);
    i =0;
    while (i < teams)
    {
        printf("%d %d %d\n", pe_index[i]+1, ma_index[i]+1, co_index[i]+1);
        i++;
    }
    
}