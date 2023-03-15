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
    printf("The Even numbers in %d are: ", n);
    int count = 0;
    printf("%d", count);
    for(i =1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
            count++;
    
        }
    }
    printf("\n");
    printf("The Total number of even is %d. ", count);
    return 0;
            
}