#include <stdio.h>
int main()
{
	int score_of_student;
	
	printf("Enter score = ");
	scanf("%d",&score_of_student);
	if(score_of_student>=80 && score_of_student<=100){
		printf("A");
	}else if (score_of_student<80 && score_of_student>=75){
		printf("B+");
	}else if (score_of_student<75 && score_of_student>=70){
		printf("B");
	}else if (score_of_student<70 && score_of_student>=65){
		printf("C+");
	}else if (score_of_student<65 && score_of_student>=60){
		printf("C");
	}else if (score_of_student<60 && score_of_student>=55){
		printf("D+");
	}else if (score_of_student<55 && score_of_student>=50){
		printf("D");
	}else if (score_of_student<50 && score_of_student>=0){
		printf("F");
	}else if (score_of_student<0 || score_of_student>100){
		printf("Error Enter score 0-100 ");
	}
	
	return 0;
}
