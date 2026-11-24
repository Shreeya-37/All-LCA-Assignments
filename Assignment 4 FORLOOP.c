#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number n:\n");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        sum= sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}


#include <stdio.h>
int main()
{
    for (int i=1; i<=5; i++)
        printf("%d", i);
    return 0;
}
