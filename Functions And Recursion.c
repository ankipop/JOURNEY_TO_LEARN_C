#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void printhello();
void printgoodbye();
void namaste();
void bonjur();
int sum(int a,int b);

int main()
{
//FUNCTIONS CREATING

printhello();
printgoodbye();

//1.PRINT A FUNCTION THAT PRINTS NAMASTE/BONJUR BASED ON USERS NATIONALITY 

char n;
printf("what is your n: ");
scanf("%c", &n);
if(n=='i'){
  namaste();}
else if(n=='f'){
  bonjur();}
else{
  printf("thanks");}
 
//2.FUNCTION TO RETURN SUM OF  TWO NUMBERS
int a;
int b;
printf("type your 1 number: ");
scanf("%d", &a);
 printf("type your 2 number: ");
scanf("%d", &b); 
int c,d;
c=sum(a,b);
printf("%d \n",c);
  
return 0;
}

void printhello(){
   printf("hello world! \n");
}

void printgoodbye(){
  printf("goodbye! \n");
}

void namaste(){
  printf("namaste \n");
}
void bonjur(){
  printf("bonjur \n");
}

int sum(int a,int b){
  return a+b;
}
