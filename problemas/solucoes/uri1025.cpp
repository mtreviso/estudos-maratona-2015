/*
* URI 1025 - Onde está o Mármore?
* ---
* Compile: gcc -o teste uri1025.c
* Execute: ./teste < texto
*/

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

// O(lgn + k)
int buscaBinaria(vector<int> &v, int x){
	
	int ini,meio,fim;
	ini = 0;
	fim = v.size()-1;
	
	while(ini <= fim){
		meio = (ini+fim)/2;
		if(v[meio] == x)
			break;
		else if (v[meio]>x)
			fim = meio - 1;
		else
			ini = meio + 1;
	}

	if(v[meio] == x){
		int p = meio;
		while(p-1 >= 0 and v[p-1] == x)
			p--;
		return p;
	}

	return -1;
}


int main(){
	
	int n,q,x,t=1;

	while(scanf("%d %d",&n,&q) and n+q>0){
		
		printf("CASE# %d:\n",t++);

		vector<int> v;
		while(n--){
			scanf("%d",&x);
			v.push_back(x);
		}
		
		// O(nlgn) para ordenar
		sort(v.begin(), v.end());

		// O(q) pesquisar
		while(q--){
			
			scanf("%d",&x);
			
			// O(lgn + k) para buscar o elemento x
			int pos = buscaBinaria(v,x);

			if(pos >= 0)
				printf("%d found at %d\n", x, pos+1);
			else
				printf("%d not found\n", x);
		}
	}

	return 0;
}