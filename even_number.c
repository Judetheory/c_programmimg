#include <stdio.h>
/*Print the even numbers in a given number.
* Get the number input from the user
*/
int main()
{   
    printf("Checking for Even numbers in a given number...\n");
    printf("Enter a number: ");
    int i, n;
    scanf("%d", &n);
    printf("The Even numbers in %d are:", n);
    for(i =1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
            
}