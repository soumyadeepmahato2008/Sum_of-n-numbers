#include <stdio.h>
int main() 
{
    int i, count, num,sum=0;
    printf("Enter number of values you want to print: ");
    scanf("%d", &count);
    for (i=0; i<count; i++)
    {
        printf("Enter your number: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum of two numbers: %d", sum);
    return 0;
}