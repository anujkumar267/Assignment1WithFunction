//WAP to swap two variables with and without using third variable
#include<stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("enter the  value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    swap(a,b);
}

void swap(int a, int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is :%d\n",a );
    printf("b is:%d",b);
}



//output
//enter the value of a:85
//enter the value of b:69
//a is :69
//b is:85