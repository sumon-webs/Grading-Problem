#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int even = 0, odd = 0, positive = 0, nagetive = 0;

    for(int i = 0; i < n; i ++)
    {
        int x;
        scanf("%d", &x);
        
        if(x % 2 ==0)
        {
            even ++;
        }
        else if(x % 2 != 0)
        {
            odd ++;
        }

        if(x > 0)
        {
            positive ++;
        }
        else if(x < 0)
        {
            nagetive ++;
        }
    }

    printf("Even %d\n", even);
    printf("Odd %d\n", odd);
    printf("Positive %d\n", positive);
    printf("Nagetive %d\n", nagetive);

    return 0;
}