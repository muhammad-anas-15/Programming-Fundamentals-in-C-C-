 #include<stdio.h>
#include<math.h>
int main (){
 
int a,b,c,discriminant;

printf("Enter value of a:\n");
scanf("%d",&a);

printf("Enter value of b:\n");
scanf("%d",&b);

printf("Enter value of c:\n");
scanf("%d",&c);

discriminant = (b*b) -(4*a*c); 

if (discriminant ==0){
 

printf("The equation has 2 equal roots");
}

if (discriminant >0){
float quadratic;
quadratic = (-b) *sqrt ((b*b)-(4*a*c) /(2*a));

printf("2 values of equation are =%f",quadratic);
}


else {
printf("Equation has Imaginary roots");
return 0;
}}
