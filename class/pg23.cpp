#include <stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%4==0&&year%100!=0){
		printf("%d��������", year); 
	}
	else if(year%400==0){
		printf("%d��������", year); 
	}
	else{
		printf("%d�겻������", year); 
	}
	return 0; n
} 