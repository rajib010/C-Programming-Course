#include<stdio.h>
#include<math.h>
// finding the area when base and height are given
// int main(){
//     int base;
//     int area;
//     int height;

//     printf("Enter base :");
//     scanf("%d",&base);

//     printf("Enter height :");
//     scanf("%d",&height);

//     area= (base * height)/2   ;

//     printf("The area of triangle is %d cm2", area);
//     return 0;    
// }


//finding the area when three sides are given

int main(){
    int a;
    int b;
    int c;
    int s;
    int intresult;
    int final;
    int area;

    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);

    s= (a+b+c)/2  ;
    intresult= (s-a)*(s-b)*(s-c);
    final=s*intresult;


    area=sqrt(final);
    printf("The area of the triangle is %d cm2",area);
    return 0;   

}