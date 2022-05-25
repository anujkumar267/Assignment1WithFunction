//WAP to obtain the transpose of a 4x4 matrix. The transpose of a matrix is obtained by
//exchanging the elements of each row with the elements of the corresponding column.

#include<stdio.h>
void transpose();
int main(){
    transpose();
    return 0;
}
void transpose(){
    int a[4][4],i,j,t[4][4];
    printf("Enter the Element in mattrix");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            }
    }
    printf("Before transpose the mattrix\n");
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
  printf("After transpose mattrix:\n");
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           t[i][j]=a[j][i];
           printf("%d\t",t[i][j]);
           }
           printf("\n");
    }
 }
/*Output
Enter the Element in matttrix:1 
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
16 
Before transpose the  mattrix:
1   2   3   4   
5   6   7   8
9   10  11  12 
13  14  15  16  
After transpose the mattrix:
1   5   9   13
2   6   10  14 
3   7   11  15 
4   8   12  16
*/