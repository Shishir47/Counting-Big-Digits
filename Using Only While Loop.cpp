#include <stdio.h>

int main()
{
    unsigned long long n;
    int count = 0;
    
    printf("Enter a number: ");
    scanf("%llu", &n);
  while(n!=0){
        n =n/10;
        count++;

    }

    printf("Total digits in numbner: %d", count);

    return 0;
}
