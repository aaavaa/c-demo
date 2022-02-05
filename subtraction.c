#include <stdio.h>

int main(void)
{
    int first_number, second_number;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &first_number, &second_number);
    int difference = first_number - second_number;
    printf("The difference is %d", difference);
    return 0;
}