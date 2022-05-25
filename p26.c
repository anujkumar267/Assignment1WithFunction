//WAP to find out in a[25] how many are positive, how many are negative, how many are
//even and how many are odd.
#include<stdio.h>
#include<stdlib.h>
int array_1();
int main(){
    array_1();

}
int array_1(){
    int pos=0,neg=0,zero=0,even=0,odd=0;
    int arrray_length;
    int *array=(int*)malloc(sizeof(int));
    printf("Ennter the length of array");
    scanf("%d",&arrray_length);
    printf("Enter the Element of array");
    for(int i=1;i<=arrray_length;i++){
        scanf("%d",&array[i]);
        }
    for(int i=1;i<=arrray_length;i++){
        if(array[i]>0){
            pos++;
        }
        else if(array[i]<0){
            neg++;
        }
        else if(array[i]==0){
            zero++;
        }
         if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The Positive is:%d ,negative is :%d,zero is %d,Even is :%d and odd is :%d",pos,neg,zero,even,odd);
}

/**
Enter the Element of array_1 1 
2 
3 
4 
5 
6 
-7 
8 
9 
10 
11 
12 
13 
14 
15 
-16 
17
18 
19 
20 
21 
22 
-23 
24 
25
The Positive is :22 ,negative is :3, zero is 0, Even is :12 and odd is :13*/