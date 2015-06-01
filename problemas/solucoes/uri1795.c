/*
* URI 1795 - Triângulo Trinomial
* ---
* Compile: gcc -o teste uri1795.c
* Execute: ./teste < texto
*/

#include <stdio.h>

int main(){


	int n;
	long long int result;
	
	scanf("%d", &n);
	
	result = 1;
	
	while(n > 0){
		result *=3;
		n--;
	}
	
	printf("%lld\n", result);
	
	return 0;
}