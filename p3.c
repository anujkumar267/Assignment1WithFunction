//WAP to find the reverse of a 4 digit number
#include<stdio.h>
void Reverse(int n);
int main(){
    int n;
    printf("Enter the number to be find the Reverse");
    scanf("%d",&n);
    Reverse(n);
    return 0;
}

void Reverse(int n){
    int rem, rev =0 ,orignal;
    orignal=n;
    while(n>0){
        rem =n%10;
        rev =rev*10+rem;
        n=n/10;

    }
    printf("The Reverse numbe is %d\n",rev);
}


//output 
//Enter the number to be find the Reverse 12345
//The Reverse number is 54321
