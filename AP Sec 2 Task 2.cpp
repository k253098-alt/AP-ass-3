// Hamza Latif 25k-3098
#include<stdio.h>
void series(int c1, int c2, int c3){
	float a = 1.0/c1 + 1.0/c2 + 1.0/c3;
	float c = 1/a;
	printf("The equivalent capacitance for the given capacitors when connected in series is : %.3f\n", c);
	return;
}

void parallel(int c1, int c2, int c3){
	int c = c1 + c2 + c3;
	printf("The equivalent capacitance for the given capacitors when connected in parallel is : %d\n", c);
	return;
}

int main(){
	int c1, c2, c3;
	char choice;
	printf("Enter the capacitance of all three capacitors for which you want to calculate the equivalent capacitance.\n");
	scanf("%d %d %d" ,&c1, &c2, &c3);
	printf("Enter your combination of capacitors s for series and p parallel.\n");
	scanf(" %c",&choice);
	switch (choice){
		case 's':
		case 'S':
			series(c1, c2, c3);
			break;
			
		case 'p':
		case 'P':	
			parallel(c1, c2, c3);
			break;
		default:
			printf("Invalid choice!\n");
	}
	return 0;
}