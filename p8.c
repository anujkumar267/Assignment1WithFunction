//if the ages of A, B and C are input through the keyboard, write a program to determine
//the youngest of the three.

#include<stdio.h>
void chekYoungest(int a, int b, int c);
int main(){
    int a,b,c;
    printf("Enter thr vlaue of a:");
    scanf("%d",&a);
    printf("Enter thr vlaue of b:");
    scanf("%d",&b);
    printf("Enter the vlaue of c:");
    scanf("%d",&c);
    chekYoungest(a,b,c);
    return 0;
}

void chekYoungest(int a, int b, int c){
    if(a>c && a>b){
        printf("Youngest is %d",a);
    }
    else if(b>c){
        printf("Youngest is %d",b);

    }
    else{
        printf("Youngest is %d",c);
    }
}

//output
// Enter the value of a:12
//Enter the value of b:85
//Enter the value of c:11
//Youngest is 85