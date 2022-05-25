//WAP to find the sum of the digits of a 4 digit number

#include<stdio.h>
void  sum(int n);
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    sum(n);
    return 0;
}

void sum(int n){
    int sum=0, rem;
    while(0<n){
        rem =n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum is:%d",sum);
}

//output 
//Enter the number:1458
// Sum is: 18