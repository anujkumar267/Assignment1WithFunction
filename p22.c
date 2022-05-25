//22) Swap the value of two variables using call by value & by reference.
#include<stdio.h>
void callByValue(int a, int b);
void callByReference(int *a, int *b);
int main(){
    int a,b;
    printf("Enter the  value of a:");
    scanf("%d",&a);
    printf("Enter the vlaue of b:");
    scanf("%d",&b);
    callByValue(a,b);
    callByReference(&a,&b);

}

void callByValue(int a, int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Use Call By Value:\n");
    printf("The new value of a is :%d\n",a);
    printf("The new value of b is :%d\n",b);
}
void callByReference(int *a, int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
    printf("Use Call By Reference\n");
    printf("The new  value of a:%d\n",*a);
    printf("The new value of b: %d",*b);
}
//output
//Enter the value of a:25
//Enter the value of b:36
//Use call By Value
// The new value of a:36
// The new value of b is:25
//Use call by Reference
// The new value of a is:36
//The new value of b is:25