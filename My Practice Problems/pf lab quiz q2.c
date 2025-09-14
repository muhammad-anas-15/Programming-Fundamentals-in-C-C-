#include<stdio.h>
#include<math.h>
float compute_cube(int number);
float compute_fifth_power(int number);

int main(){
int number;
printf("Enter tne number");
scanf("%d",&number);

float compute_cube(number);
float compute_fifth_power(number);

 if (number <=1000)
 {
printf("Cube of number is =%f\n",compute_cube(number) );
printf("Fifth_power =%f\n",compute_fifth_power(number) );
}
else
{
printf("Fifth_power =%f\n",compute_fifth_power(number));

return 0;
 }

float compute_cube(int number)
 {
 float cube;
cube = pow(number,3);
 return cube;
}

 float compute_fifth_power(int number){
{
 float fifth_power;
fifth_power = pow(number,5);
 return fifth_power;}
    

 

