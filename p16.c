//WAP to enter numbers until the user wants. At the end it should display the count of
//positive, negative and zeros entered.

#include<stdio.h>
void show();
int main(){
    show();
    return 0;
}

void show(){
    int pos=0,neg =0,zero=0,i,len;
    int arr[100];
    printf("Enter the legth:");
    scanf("%d",&len);
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else if(arr[i]==0){
            zero++;
        }
    }
    printf("The Positive is :%d\n",pos);
    printf("The Negative is :%d\n",neg);
    printf("The Zero's is :%d\n",zero);
}


//output 
//Enter the length:6 
//9 
//-6
//-5
//0 
//0 
//3 
//The Positive is:2  
//The Negative is :2  
//The Zero's is :2  