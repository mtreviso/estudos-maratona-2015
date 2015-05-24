/*
* URI 1183 - Acima da Diagonal Principal
* ---
* Compile: g++ -o teste uri1183.cpp
* Execute: ./teste < texto
*/

#include <cstdio>

int main(){
	 
	char o;
	double m[12][12];
	
	scanf("%c\n",&o);

	for (int i = 0; i < 12; ++i)
		for (int j = 0; j < 12; ++j)
			scanf("%lf\n", &m[i][j]);



	double soma = 0;
	int count =0;

	for (int i = 0; i < 12; ++i){
		for (int j = 0; j < 12; ++j){
			if (j>i){
				 soma+= m[i][j];
				 count++;
			}
		}
	}

	if(o=='M')
		printf("%.1lf\n", soma/count);
	else
		printf("%.1lf\n", soma);


	return 0;
}