#include<stdio.h>
int main(){
	int Final_Amount,D,Total_Purchase_Amount;
	printf("Total Purchase Amount:");
	scanf("%d",&Total_Purchase_Amount);
	if(Total_Purchase_Amount>=1000){
		D=Total_Purchase_Amount*10/100;
		
	}
	else if(Total_Purchase_Amount<=500){
		D=Total_Purchase_Amount*5/100;
		
	}
	else { D = 0;
	}
	Final_Amount=Total_Purchase_Amount-D;
	printf("Final Amount:%d",Final_Amount);
	
}