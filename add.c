include <stdio.h>

int add (int x, int y) {
	return x + y; 

}


int main() { 

	int a, b, sum;

	printf("Enter the first number: ");
    	scanf("%d", &a);

	printf("Enter the first number: ");
        scanf("%d", &b);

	sum = add(a, b);

	printf(sum);



} 
