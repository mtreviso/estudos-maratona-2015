/*
* URI 1022 - TDA Racional
* ---
* Compile: gcc -o teste uri1022.c
* Execute: ./teste < texto
*/

#include <stdio.h>

int mdc(int a, int b){
	if(b == 0)
	  return a;
  else
	  return mdc(b, a % b);
}

int mdcIterativo(int a, int b){
	
	while (a != 0){
		int temp = a; 
		a = b%a;  
		b = temp;
	}

	return b;
}


int main(){
	
	int n;	
	int n1, n2, d1, d2;
	char op1, op2, op3;	
	int cima, baixo;
	int cima_s, baixo_s;

	scanf("%d", &n);

	while(n--){
		
		scanf("%d %c %d %c %d %c %d", 
		&n1, &op1, &d1, &op3, &n2, &op2, &d2);
		
		if(op3 == '+'){
			cima = ((n1*d2) + (n2*d1));
			baixo = (d1*d2);		
		}
		else if(op3 == '-'){
			cima = ((n1*d2) - (n2*d1));
			baixo = (d1*d2);
		}
		else if(op3 == '*'){
			cima = (n1*n2);
			baixo = (d1*d2);
		}
		else if(op3 == '/'){
			cima = (n1*d2);
			baixo = (n2*d1);
		}
		
		int d = mdc(cima, baixo);
		cima_s = cima/d;
		baixo_s = baixo/d;
		
		if(baixo_s < 0){
			cima_s = -cima_s;
			baixo_s = -baixo_s;
		}
	
		printf("%d/%d = %d/%d\n", cima, baixo, 
		cima_s, baixo_s);
			
	}
	
	return 0;
}
