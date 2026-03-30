#include<stdio.h>
int main() {
    int m1,m2,m3,m4,m5;
    int total_marks;
    float agg_percentage;

    printf("Enter the marks:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40) {
        total_marks=m1+m2+m3+m4+m5;
        agg_percentage=(total_marks/5.0);

    if(agg_percentage>=75)
        printf("Grade:Distinction\n");
    else if(agg_percentage>=60)
        printf("Grade:First Division\n"); 
    else if(agg_percentage=50)
        printf("Grade:Second Division\n");
    else
        printf("Grade:Third Division\n");              
    }
    else{
        printf("Result:FAIL\n");
    }
    return 0;
}