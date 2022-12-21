#include <stdio.h>

void main(){
	int age = 18;
	int year_of_birth = 2022;
	float weight = 60.7;

	printf("Toi nam nay %-10d tuoi va can nang la %10.2f kg \n", age, weight);

	printf("Cap nhat lai nam sinh va can nang: ");
	scanf("%d %f",&year_of_birth, &weight);
	
	age = 2022 - year_of_birth;

	printf("Toi nay %d tuoi, can nang %.1f kg\n", age, weight);
}

