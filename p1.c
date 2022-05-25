//WAP to find the area & perimeter of a rectangle
int area(int length,int width);
int perimeter(int length,int width);

int main(){
    int length,width,a,b;
    printf("Enter the Length");
    scanf("%d",&length);
    printf("Enter the Width");
    scanf("%d",&width);
    a=area(length,width);
    printf("The area of Reactangle is=%d\n",a);
    b=perimeter(length,width);
    printf("The perimeter of Reactangle is:%d",b);
    return 0;
}
int area(int length, int width){
    int area;
    area=length*width;
    return area;
}
int perimeter(int length, int width){
    int peri;
    peri=2*(length+width);
    return peri;
}


//output
//Enter the length 2 
//Enter the Width 5 
//The area of Rectangle is =10
//The perimeter of Rectangle is :14