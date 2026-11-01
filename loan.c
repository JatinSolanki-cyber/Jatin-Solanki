#include<stdio.h>
int main(){
	int CS,LP;
	scanf("%d",&CS);
	if (CS>=750){printf("LP= premium loan");
	}
	else if (CS>=600){printf("LP= standard loan");
	}
	else 
	{printf("LP= not eligible for loan");
	}
}