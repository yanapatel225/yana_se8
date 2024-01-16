#include<stdio.h>
main(){
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	if(marks > 75){
		printf("distinction");
	}else if (marks > 60 && marks <= 75){
		printf("first class");          
	}else if (marks > 50 && marks <= 60){
		printf("second class");
	}else if (marks > 35 && marks <=50){
		printf("pass class");
	}else if (marks < 30 && marks > 0){
		printf("fail");
	}else{
		printf("Invaild iutput");
	}
}
