#include <stdio.h>
#include <math.h>

int main()
{
    int choice, num, i;
    long long factorial = 1;

    printf("\n--- NUMBER OPERATIONS PROGRAM ---\n");
    printf("1. Square Root\n");
    printf("2. Square of Number\n");
    printf("3. Cube of Number\n");
    printf("4. Check Prime Number\n");
    printf("5. Factorial of Number\n");
    printf("6. Prime Factors of Number\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(choice)
    {
    case 1:
     printf("Square root of %d = %.2f\n", num, sqrt(num));
        break;

    case 2:
     printf("Square of %d = %d\n", num, num * num);
        break;

    case 3:
     printf("Cube of %d = %d\n", num, num * num * num);
        break;

    case 4:
        {
            if(num <= 1)
            {
                printf("%d is NOT a Prime Number\n", num);
                break;
            }
            for(i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                    printf("%d is NOT a Prime Number\n", num);
                    break;
                }
            }
            if(i > num/2)
            {
                printf("%d is a Prime Number\n", num);
            }
            break;
        }
    case 5:
        if(num<0) {
         printf("Factorial of negative number does not exists\n");
     } 
        else {
        factorial=1;
        for(i=2;i<=num;i++) {
            factorial *=i;
        }
        printf("Result=%lld \n",factorial); 
     }
      break;

    case 6:
     printf("Prime factors of %d are: ", num);
        for(i = 2; i <= num; i++) 
            {
            while(num % i == 0)
                {
                printf("%d ", i);
                num = num / i;
                }
            }
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}