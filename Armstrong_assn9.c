#include<stdio.h>
int main(){
    int num,digit,temp;
    int sum=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    temp=num;

    while(temp>0) {
        digit=temp % 10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
     }
    if (sum==num)
     printf("It's a ARMSTRONG NO \n");
    else
     printf("It is not an ARMSTRONG NO \n");
    return 0; 
}