/*
* URI 1169 - Trigo no Tabuleiro
* ---
* Compile: g++ -o teste uri1169.cpp
* Execute: ./teste < texto
*/

#include <cstdio>
#include <cmath>

int main(){

	int n, x;
	long long unsigned y;
	const long long unsigned c = 12000;

	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);

		if(x == 64){
			y = (1LL << 63);
			y /= 6000;
			// 2^64/12000 = 2^63 * 2/12000 = 2^63/6000
		}
		else
			y = (1LL << x)/c;
		
		printf("%llu kg\n", y);
	}


	return 0;
}