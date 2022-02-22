#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
   Given the positive number of terms and the value of x, display the result of the following series.

*/

int main(int argc, char *argv[]) 
{
   int term,i;
   double sum=0,x,rem,first,sec;
   
   printf("Please enter a value for x: ");
   scanf("%lf",&x);
   printf("Please enter the number of terms: ");
   scanf("%d",&term);
    while(term<=0)
    {   
    	printf("Please re-enter the number of terms:");
		scanf("%d",&term);
	}
    
    
    for(i=1;i<=term;i++)
	{   
		if(i%2 ==0)            // this is for denominator
			rem = (2*i*(-1));
		else
			rem=2*i;
			
		first=(x+(i*0.1));  //this is for finding the numerator
		sec=pow(first,(2*i)-1);
		sum+= sec/rem;
 	}	
	
	printf("%.2lf",sum);
	return 0;
}
