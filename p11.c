//WAP to find whether the entered number is prime or not.
#include<stdio.h>
void checkPrime(int x);
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
   checkPrime(n);
   return 0;
}

void checkPrime(int x){
    int c=0,i;
    for(i=1;i<=x;i++){
        if(x%i==0){
            c++;
        }
    }
        if(c==2){
            printf("number is prime");
        }
        else{
            printf("number is not prime");
        }

}


//output

//Enter the number 7
//number is  prime 