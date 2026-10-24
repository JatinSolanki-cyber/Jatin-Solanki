#include<stdio.h>
int main(){
	int T,U,B;
	printf("1. R\n");
	printf("2. C\n");
	printf("3. I\n");
	printf("enter customer type ");
	scanf("%d",&T);
	printf("enter the unit");
	scanf("%d",&U);
	switch(T){
		case 1: 
		B=U*5;
		break;
		case 2:
			B=U*8;
			break;
		case 3:
		B=U*10;
		break;	
	}
	printf("total bill = %d",B);
	
}