/*
* URI 1244 - Ordenação por Tamanho
* ---
* Compile: g++ -o teste uri1244.cpp
* Execute: ./teste < texto
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>

using namespace std;


bool orderBy(const string &x, const string &y){
  return (x.size() > y.size());
}


int main(){
  
  string s;

  char linha[2600];  
  int n;  
  
   

  scanf("%d\n", &n);
  while(n--){
     
     vector<string> vet;
     scanf("%[^\n]\n", linha);
  
     char *p = strtok(linha, " ");
     while(p != NULL){
        s = p;
        vet.push_back(s);
        p = strtok(NULL, " ");     
     }
     
     
     stable_sort(vet.begin(), vet.end(), orderBy);
     
     cout << vet[0];
     for(int i=1; i<vet.size(); i++){
        cout << " " << vet[i];
     }
      
     cout << endl;
  }
    

}
