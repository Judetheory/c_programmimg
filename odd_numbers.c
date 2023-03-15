#include <stdio.h>
/*Print the odd numbers in a given number.
* Get the number input from the user
*/
int main()
{   
    printf("Checking for Odd numbers in a given number...\n");
    printf("Enter a number: ");
    int i, n;
    scanf("%d", &n);
    printf("The Odd numbers in %d are:", n);
    int count = 0;
    printf("The total number of Odd is: %d", count);
    for(i =1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
            
}