//20) WAP to generate all combinations of 1, 2 and 3.
#include<stdio.h>
void combination();
int main(){
    combination();
    return 0;
}

void combination(){
    int i,j,k;
    int len=4;
    for(i=1;i<len;i++){
        for(j=1;j<len;j++){
            for(k=1;k<len;k++){
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
}




//output
//1 1 1
//1 1 2
//1 1 3
//1 2 1
//1 2 2
//1 2 3
//1 3 1
//1 3 2
//1 3 3
//2 1 1
//2 1 2
//2 1 3
//2 2 1
//2 2 2
//2 2 3
//2 3 1
//2 3 2
//2 3 3
//3 1 1
//3 1 2
//3 1 3
//3 2 1
//3 2 2
//3 2 3
//3 3 1
//3 3 2
//3 3 3