#include <stdio.h>
float largest(float,float,float);
float smallest(float,float,float);
int ave(float,float,float,float,float);
int main() {
	printf("Enter marks of 3 subjects out of 100\n");
	float a,b,c, small,large;
	int av;
	scanf("%f%f%f",&a,&b,&c);
	small=smallest(a,b,c);
	large=largest(a,b,c);
	av=ave(a,b,c,small,large);
	printf("The highest mark is %f",large);
	printf("\nThe lowest mark is %f",small);
	printf("\nThe value of the new variable is %d",av);
	return 0;
}
float largest(float a,float b,float c){
	if(a>b){
    	if(a>c){
        	return a;
    	}
    	if(c>a){
        	return c;
    	}
	}
	if(b>a){
    	if(b>c){
        	return b;
    	}
    	if(c>b){
        	return c;
    	}
	}
}
float smallest(float a, float b, float c){
	if(a<b && a<c){
    	return a;
	}
	else if(b<a && b<c){
    	return b;
	}
	else{
    	return c;
	}
}
int ave(float a,float b,float c, float large,float small){
	float mid,av;
	if((c!=large)&&(c!=small)){
    	mid=c;
	}
	else if((b!=large)&&(b!=small)){
    	mid=b;
	}
	else{
    	mid=a;
	}
	av=(small+large)/2;
	if(av>mid){
    	return 1;
	}
	else{
    	return 0;
	}
}

