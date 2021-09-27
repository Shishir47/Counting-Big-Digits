#include <stdio.h>

int main()
{
    unsigned long long n;
    int count = 0;
    
    printf("Enter a number: ");
    scanf("%llu", &n);
    do
    {
        count++;

        n =n/10;
    } while(n!=0);

    printf("Total digits in numbner: %d", count);

    return 0;
}
