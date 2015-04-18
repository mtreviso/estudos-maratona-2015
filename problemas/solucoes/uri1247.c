/*
* URI 1247 - Guarda Costeira
* ---
* Compile: gcc -o teste uri1247.c
* Execute: ./teste < texto
*/

/*
D = V.T
T = D/V
V = D/T

____________________________ AGUAS
                |   
                |
                |
                12      
                |            
                |                 
___G_____D______B___________ COSTA


G = GUARDA
B = BANDIDOS
D = DISTANCIA

c² = a² + b²
c = sqrt(a² + b²)

D_GA = sqrt(D*D  + 12*12)

*/

#include <stdio.h>
#include <math.h>

double getTempo(double d, int v){
  return d/v;
}

double getDistancia(int d){
  return sqrt(d*d + 12*12);
}

int main(){
  
  int d, vf, vg;
  while(scanf("%d %d %d", &d, &vf, &vg) != EOF){
    
    double d_ga = getDistancia(d);
    double t_b = getTempo(12, vf);
    double t_g = getTempo(d_ga, vg);
    
    if(t_g <= t_b)
      printf("S\n");
    else
      printf("N\n");

  }
}
