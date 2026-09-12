#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // Spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Stars
        for(k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
