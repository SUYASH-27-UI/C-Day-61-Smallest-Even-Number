# C-Day-61-Smallest-Even-Number
# C Day 61 - Smallest Even Number

This program takes multiple numbers from the user and finds the smallest positive even number.

## Example

Input:

```text
25
18
42
10
31
20
```

Output:

```text
Smallest even number = 10
```

## Concepts Used

* `for` loop
* `if` condition
* Nested `if`
* Modulus operator `%`
* AND operator `&&`
* User input using `scanf()`
* Finding the smallest number

## How It Works

1. The user enters how many numbers they want to check.
2. The program takes each number using a `for` loop.
3. `number % 2 == 0` checks whether the number is even.
4. The program checks whether it is a positive number.
5. The first positive even number is stored in `smallest_even`.
6. Other even numbers are compared with the stored value.
7. If a smaller even number is found, it replaces the previous value.
8. Finally, the smallest positive even number is displayed.

## C Code

```c
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
```

## Output

```text
Enter how many numbers: 6
Enter number 1: 25
Enter number 2: 18
Enter number 3: 42
Enter number 4: 10
Enter number 5: 31
Enter number 6: 20

Smallest even number = 10
```

## Goal

The goal of this project is to practice loops, conditions, modulus operator, and finding the smallest positive even number in C.
