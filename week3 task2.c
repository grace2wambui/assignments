/*
Name:Grace Wambui
Reg No:CT100/G/30628/26
*/

#include <stdio.h>

int main(){
float amount, units, result;

printf("enter the no of units used\t");
scanf("%f", &units);
	
	float calculatebill(units){
		float amount;
		;amount=units*1;
		
		return amount;
	}
	
	;result=calculatebill(units);
	;amount=units*1;
	
printf("=========\n");
printf("units used:%f\n", units);
printf("total water bill:Ksh %.2f\n", result);
printf("=========\n");

return 0;



}