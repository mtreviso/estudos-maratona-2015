/*
* URI 1796 - Economia Brasileira
* ---
* Compile: gcc -o teste uri1796.c
* Execute: ./teste < texto
*/

#include <stdio.h>

int main(){


	int q, q2, n, s = 0;
	
	scanf("%d", &q);
	
	q2 = q;
	
	while(q--){
		scanf("%d", &n);
		s += n;
	}
	
	if( s*2 >= q2)
		printf("N\n");
	else
		printf("Y\n");
	
	return 0;
}