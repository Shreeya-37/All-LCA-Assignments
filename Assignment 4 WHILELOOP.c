#include <stdio.h>
int main()
{
    int n,fact = 1, i = 1;
    printf("Enter the number n: \n");
    scanf("%d", &n);
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The factorial of the entered number is %d", fact);
    return 0;
}



#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d", i);
        i++;
    }
    return 0;
}
