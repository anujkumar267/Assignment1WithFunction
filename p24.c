//WAP to find the maximum number and second maximum in an array.

#include<stdio.h>
void max_array(int n);
int main(){
    int n;
    printf("Enter the Size of  an array");
    scanf("%d",&n);
    max_array(n);
    return 0;
}


void max_array(int n){
    int i, max_1,max_2;
    int a[100];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max_1=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max_1){
        max_1=a[i];
    }
    }

    max_2=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max_2 && max_1>a[i]){
            max_2=a[i];
        }
    }
    printf("The First Maximum element is %d and second element is %d",max_1,max_2);
}

//output 
//Enter the Size of an array 5
//69
//45
//85
//98
//23
//The First Maximum element is 98 and second element is 85