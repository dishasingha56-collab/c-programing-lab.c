//w.c.p to count the digit of a whole number//
#include<stdio.h>
int main(){
	int n,count,digit;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		count++;
		n=n/10;
		
	}
	printf("Count the digit is:%d",count);
	return 0;
}