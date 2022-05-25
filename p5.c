/*If a five-digit number is input through the keyboard, write a program to print a new
number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed
as 23402.*/

#include<stdio.h>
void digit(int n);
int main(){
    int n;
    printf("Enter the digit:");
    scanf("%d",&n);
    digit(n);
    return 0;
}

void digit(int n){
    int rem; 
    int ans=0;
    int Inc=1;
    while(n>0){
        rem=n%10;
        rem++;
        rem=rem%10;
        ans=ans+rem*Inc;
        Inc=Inc*10;
        n=n/10;
    }
    printf("Result is: %d",ans);
}


//Output
//Enter the digit :1259
//Result is:2360

