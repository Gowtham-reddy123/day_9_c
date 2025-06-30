//starting assignment operator 
//the assignment operators ig given below
//		1.+=(adding ,a+=5 is equal to a=a+5)
//		2.-=(substracting,a-=5 is equal to a)
//		3.*=(multiplying ,a*=5 is equal to a=5a)
//		4./=(dividing,a/=5 is equal to a=a/5)
//		5.%=(storing remainder ,a%=5 is equal to a=a/5 it stores the remainder 
#include <stdio.h>
int main(){
	int a;
	printf("enter the value of a is ");
	scanf("%d",&a);
	a+=10;
	printf("the value of a is %d : ",a);
	return 0;
	}