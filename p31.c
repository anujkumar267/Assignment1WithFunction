//WAP to pick up the largest number from any 5X5 matrix.

#include<stdio.h>
int  mattrix();
int main(){
    int result;
    result=mattrix();

   printf("The largest number is %d",result);
   return 0;
}
int mattrix(){
    int len=5,i,j,a[5][5] ,max=0;
    printf("enter the element");
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The mattrix is\n");
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }

    }
    return max;
}

//Output
/*enter the element1
2 
3 
4 
5 
6 
7 
8 
9 
10 
11 
12 
13
14
15 
98
17
18
19
20
21
22
55
23
24
The Mattrix is
1   2   3   4   5
6   7   8   9   10 
11  12  13  14  15  
98  17  18  19  20  
21  22  55  23  24
The  largestnumber is 98
*/