//21) WAP to print the multiplication table of the number entered by the user.


#include<stdio.h>
void showTable(int x);
int main(){
    int n;
    printf("Enetr the number to be show the table");
    scanf("%d",&n);
    showTable(n);
    return 0;
}
void showTable(int x){
    int i,res;
    for(i=1;i<11;i++){
        res =x*i;
          printf("%d*%d=%d\n",x,i,res);
    }

}


//output
//Enter the number to bes shoe the table7
//7*1=7
//7*2=14
//7*3=21
//7*4=28
//7*5=35
//7*6=42
//7*7=49
//7*8=56
//7*9=63
//7*10=70