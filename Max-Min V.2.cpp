#include <stdio.h>

int main ()
{
	int num1,num2,num3;
	printf("Enter your 3 Number (eg.1 2 3 or 5 7 3 )\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		if (num2>num3){
			printf("Max = %d | Min = %d",num1,num3);
		}else{
			printf("Max = %d | Min = %d",num1,num2);
		}
	}else if(num2>num1){
		if (num1>num3){\
			printf("Max = %d | Min = %d",num2,num3);
		}else{
			printf("Max = %d | Min = %d",num2,num1);
		}	
	}else if(num3>num1){
		if (num1>num2){
			printf("Max = %d | Min = %d",num3,num2);
		}else{
			printf("Max = %d | Min = %d",num3,num1);
		}		
	}

	return 0;	
}
