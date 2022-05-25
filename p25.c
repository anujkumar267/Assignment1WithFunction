//25) WAP that interchanges the odd and even elements of an array.
#include<stdio.h>
void swap_array(int n);
int main(){
    int len;
    printf("Enter the length of  eh array:");
    scanf("%d",&len);
    swap_array(len);
}
void swap_array(int x){
    int temp;
    int arr[100];
    printf("Enter the element of array:\n");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x-1;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("change odd into even");
    for(int i=0;i<x;i++){
        printf("%d\n",arr[i]);
    }
}

/*
Output
Enter the length of  eh array:10
Enter the element of array:
1
2
3
4
5
6
7
8
9
10
change odd into even2
1
4
3
6
5
8
7
10
9*/