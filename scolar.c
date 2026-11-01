#include<stdio.h>
int main(){
	int GPA,S;
	scanf("%d",&GPA);
	if (GPA>=9){
		printf("S: full");
	}
	else if (GPA>=8)
	{printf("S: 75%% scolarship");}
	else if (GPA>=7){
		printf("S: 50%% scolarship");
	}
	else if (GPA>=6){
	printf("S: 25%% scolarship");
	}
	else 
	{printf("S: NO scolarship");
	}
}