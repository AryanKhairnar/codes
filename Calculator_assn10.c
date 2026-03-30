#include<stdio.h>
int main() {
    int choice;
    float num1,num2,result;
    int i,n;
    long long fact=1;
    
    printf("\n--SIMPLE CALCULATOR--\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Power(x^y)\n");
    printf("6.Factorial(x!)\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
     printf("Enter two numbers:");
     scanf("%f%f",&num1,&num2);
     result=num1+num2;
     printf("Result=%.2f\n",result);
        break;
    
    case 2:
     printf("Enter two numbers:");
     scanf("%f%f",&num1,&num2);
     result=num1-num2;
     printf("Result=%.2f\n",result);
        break;    
    
    case 3:
     printf("Enter two numbers:");
     scanf("%f%f",&num1,&num2);
     result=num1*num2;
     printf("Result=%.2f\n",result);
        break;
    
    case 4:
     printf("Enter two numbers:");
     scanf("%f%f",&num1,&num2);
     if (num2 !=0)
      printf("Result=%.2f\n",num1/num2);
     else
      printf("Error!");
        break;
       
    case 5:
     printf("Enter base and exponent:");
     scanf("%f%f",&num1,&num2);
     result=1;
     for(i=1;i<=(int)num2;i++){
        result*=num1;
     }
     printf("Result=%.2f\n",result);
        break;
        
    case 6:
     printf("Enter the number:");
     scanf("%d",&n);
     if(n<0) {
        printf("Factorial of negative number does not exists\n");
     } 
     else {
        fact=1;
        for(i=2;i<=n;i++) {
            fact *=i;
        }
        printf("Result=%lld \n",fact); 
     }
      break;

    default:
        printf("Invalid choice!\n");
    }
    return 0;
}