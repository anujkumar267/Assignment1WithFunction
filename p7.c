// WAP to find the reverse of a 4 digit number and compare it to the original number.

#include<stdio.h>
void Reverse(int n);
int main(){
    int n;
    printf("Entr the numbe to be find the Reverse");
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
    if(orignal==rev){
        printf("The orignal number %d is equals to Reverse number %d",orignal,rev);
    }
    else{
        printf("The orignal number %d is not equals to Reverse number %d",orignal,rev);
    }
}


//output
//Enter the number to  be find the Reverse 1452
//Ther Reverse number is 2541
// The orignal numbe 1452 is not equals to Reverse number 2541 