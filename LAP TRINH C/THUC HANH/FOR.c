#include <stdio.h>

void main(){
	
	int age;
	
	printf("Nhap tuoi: ");
	scanf("%d", &age);
	
	for(int i = 1; i <= age; i++){
		printf("Nam nay toi: %d tuoi \n", i);
	}
}