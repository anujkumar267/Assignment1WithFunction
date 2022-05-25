//15) WAP to print all the Armstrong numbers between 1 and 500.

#include<stdio.h>
void print(int len);
int main(){

int len;
printf("Enter the length to be find the arsmstrong number");
scanf("%d",&len);
print(len);
return 0;
}

void print(int len){
    int i,r,s,x;
printf("Armsstrong number are:");
for(i=0;i<len;i++){
s=0;
x=i;
while(0<x){
 r=x%10;
 s=s+r*r*r;
 x=x/10;  
}
if(s==i){

printf("%d\n",i);}
}
}

//output 
//Enter the length to be find the arsmstrong number500
//Armsstrong number are:0
//1 
//153 
//370 
//371 
//407