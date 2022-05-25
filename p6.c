//6) WAP to find whether the year is leap or not ( Do this with conditional operators)

#include<stdio.h>
void leap(int x);
int main(){
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    leap(year);
}

void leap(int x){
    if(x%4==0 && (x%400==0) || (x%100!=0)){
        printf("year is leap year");
        
    }
    else{
        printf("year is not leap year");
    }
}


//output 
//Enter the year 1988
//year is leap year