#include<stdio.h>

float increment(float a);
main(){
    float val1, val2;
	val1 =3;
	 
	
	val2 = increment(val1);
	
	printf("New value is %f",val2);
	return 0;	
	
}
   float increment(float a){
   	
   	float new_val =a+10.5;
   	 
   	return new_val; 
   }
