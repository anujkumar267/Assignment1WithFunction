//WAP to find if the number to be searched is present in the array and if yes, then
//display the number of times it appears.

#include<stdio.h>
void checkElement();
int main(){
    checkElement();
    return 0;
}


void checkElement(){
    int arr[100];
    int n,i,key;

    printf("Enter the Size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter the Element to found");
    scanf("%d",&key);
    int found =0;
    int count =0;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            found =1;
            count++;


        }
    }
    if(found==1){
        printf("Element Found in the array in %d  times",count);
    }
    else{
        printf("Element are not  found in the array:");
    }
    //int count=0;
    //for(i=0;i<n;i++){
      //  if(arr[i]==key){
        //    count++;
        //}
    //}
    //printf("The number is found in the array %d times",count);

}





//Output
//Enter thje soze of array:8
//1
//2
//2
//2
//3 
//4
//65 
//7 
//Enter the Element ot be found 2
//Element Found in the array in 3 times 
