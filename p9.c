//Write a program that prints the numbers from 1 to 100. But for multiples of three print
//“Obdure” instead of the number and for the multiples of five print “Infotech”. For
//numbers which are multiples of both three and five, print “ObdureInfotech”.

#include<stdio.h>
void printNum();
int main(){
    printNum();

}
void printNum(){
    int i;
    for(i=1;i<101;i++){
        if(i%15==0){
            printf("Obdure Infotech\n");
        }
        else if(i%5==0){
            printf("Infotech\n");
        }
        else if(i%3==0){
            printf("Obdure\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}
