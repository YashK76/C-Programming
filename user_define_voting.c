#include<stdio.h>
#include<string.h>
int main(){
	int  age;
	printf("Enter your age :%d",age);
	scanf("%d",&age);
	char nationality[]="Indian";

	if(age>=18){
		if(strcmp(nationality,"Indian")==0){
		printf("You are eliglible for voting");
	}
	}
	else {
	    printf("You are not eligible");
	}
}
