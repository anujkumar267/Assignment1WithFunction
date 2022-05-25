//12) WAP to find the factorial value of any number.
#include<stdio.h>
int factorial(int n);
int main(){
    int n, result;
    printf("Entre the number to be find the Factorial:");
    scanf("%d",&n);
    result=factorial(n);
    printf("Factorial is:%d",result);
}

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


//output 
//Entrt the number to be find the Factorial:7
//Factorial is :5040