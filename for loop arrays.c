#include <stdio.h>
int main(){
	   int i;
	   int sum=0;
	   int marks[7]={10,20,30,40,50,60,70};
	   
	   //loops, for loop
	   //for (start; stop; step)
	   
	   for(i=0;i<=6;i++){
		   printf("%d \n",marks[i]*marks[i]);
		   sum=sum+marks[i];
	   }
	   printf("the sum is%d", sum);
	   return 0;	
}