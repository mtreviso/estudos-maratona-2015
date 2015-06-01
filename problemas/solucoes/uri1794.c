/*
* URI 1794 - Lavanderia
* ---
* Compile: gcc -o teste uri1794.c
* Execute: ./teste < texto
*/

#include <stdio.h>

int main(){

	int n;
	
	scanf("%d", &n);
	int la,lb,sa,sb;
	
	scanf("%d %d %d %d", &la, &lb, &sa, &sb);
	
	if( n >= la && n <= lb && n >= sa && n <= sb)
		printf("possivel\n");
	else
		printf("impossivel\n");
	return 0;
}