#include <stdio.h>

int main(void)
{
    int first_number, second_number;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &first_number, &second_number);

    int sum = first_number + second_number;

    printf("The sum is %d", sum);
    return 0;
}