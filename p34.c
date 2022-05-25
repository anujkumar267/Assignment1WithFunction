//WAP to multiply any two 3x3 matrices.

#include<stdio.h>
void mattrix();
int main(){
    mattrix();
    return 0;
}
void mattrix(){
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("Enter thr number to be First mattrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The first mattrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number to be second matrrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The Second mattrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
           for(k=0;k<3;k++){
               sum=sum+a[i][k]*b[k][j];
               c[i][j]=sum;
           }

        }
    }
    printf("The result mattrix is :\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
}
}

/*OUTPUT
Enter the number  to be first mattrix1
1 
2 
3 
4 
5 
6 
7 
8 
9 
The first mattrix1 is: 
1   2   3 
4   5   6 
7   8   9
Enter thr number to be second mattrix2
1 
2 
3 
4 
5 
6 
7 
8 
9
The second mattrix is:
1   2   3   
4   5   6   
7   8   9   
The Result mattrix is:
30  36  42 
66  81  96 
102 126 150
*/ 