9#include<stdio.h>
#include<stdlib.h>

int main()
{
// P1.CALCULATE AREA OF A SQUARE

int side;
printf("length of side: ");
scanf("%d", &side);
int area=side*side;
printf("the area is: %d", area);

// P2.CALCULATE AREA OF CIRCLE
    
float radius;
printf("radius of the circle:  ");
scanf("%f",&radius);
float area=3.14*radius*radius;
printf("the area is: %f ", area);

//P3. IMPLICIT CONVERSION   

int num=(int) 1.9999;
printf("%d", num);

//P4.WRITE A PROGRAM TO CHECK IF A NUMBER IS DIVISIBLE BY 2

int num;
printf("type in your number: ");
scanf("%d",&num);
if(num%2==0){
    printf("number is div by 2");
}
else{
    printf("number is not div by 2");
}

    
    return 0;
}
