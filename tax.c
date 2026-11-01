#include<stdio.h>
int main(){
	int AI,T;
	scanf("%d",&AI);
	if (AI<=25000){
		T=AI*10/100;
		printf("%d",T);
	}
	else if (AI<=50000){
		T=AI*20/100;
		printf("%d",T);
	}
	else if (AI<=100000){
		T=AI*30/100;
		printf("%d",T);
	}
	else
	 {T=AI*40/100;
	printf("%d",T);
	}
}