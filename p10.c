//10) WAP to find out whether the entered number is Armstrong or not.

#include<stdio.h>
void chekcNumber( int n);
int main(){
    int n;
    printf("Enter the number to be find the number is armstrong:");
    scanf("%d",&n);
    chekcNumber(n);
    return 0;
}

void chekcNumber(int n){
    int arm=0,c,rem;
    c=n;
    while(n>0){
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
}




//output
//Enter the number to be find the number is armstrong:153
//Number is Armstrong