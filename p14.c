//wo numbers are entered through the keyboard. WAP to find the value of one number
//raised to the power of another.

#include<stdio.h>
int power(int x, int y);
int main(){
     int a, b,c;
     printf("Enter the number to be find the power");
     scanf("%d",&a);
     printf("Enter the power");
     scanf("%d",&b);
     c=power(a,b);
     printf("Result is :%d",c);
}

int  power(int x, int y){
    int i,powerr=1;
    for(i=1;i<=y;i++){
        powerr=powerr*x;
    }
    return powerr;
}


//output
//Enter the number to be find the powerr3
//Enter the power powerr3
//Result is :27 