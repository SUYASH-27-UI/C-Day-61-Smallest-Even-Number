#include <stdio.h>

int main()
{
    int n, number;
    int smallest_even = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0 && number > 0)
        {
            if (smallest_even == 0 || number < smallest_even)
            {
                smallest_even = number;
            }
        }
    }

    if (smallest_even == 0)
    {
        printf("No positive even number found.");
    }
    else
    {
        printf("Smallest even number = %d", smallest_even);
    }

    return 0;
}
