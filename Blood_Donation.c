 #include<stdio.h>
 #include<string.h>
 int main(){
 	int age=18;
 	int weight=60;
	char gender[10]="Female";
 	char disease[]="NO";
 	if(strcmp(gender,"Male")==0){
 		if(strcmp(disease,"Diabitise")!=0){
 			if(weight>=60){
 			if(age>=18){
 				printf("He are eligible to blood donate");
 			}
 			else
			 {
 				printf("not are able to donate the blood ");
			 }
 			
		 }
 		
	 }
 }
 else if(strcmp(gender,"Female")==0){
 	if(strcmp(disease,"Diabitise")!=0){
 			if(weight>=60){
 			if(age>=18){
 				printf("She are eligible to blood donate");
 			}
 			else
			 {
 				printf("not are able to donate the blood ");
			 }
 }
}
}
}
