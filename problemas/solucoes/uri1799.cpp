/*
* URI 1799 - O Rato no Labirinto
* ---
* Compile: g++ -o teste uri1799.cpp
* Execute: ./teste < texto
*/

#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>

using namespace std;

typedef pair <string,int> si;

int bfs(map<string, map<string,int> >&adj, string I, string F){
	
	queue <si> q;
	map<string,int> vis;
	map<string,int>::iterator it;
	
	q.push(si(I,0));
	vis[I]=1;
	

	while(!q.empty()){
		si t = q.front();
		q.pop();
		string u = t.first;

		if(u == F)
			return t.second;

		for(it = adj[u].begin();it !=adj[u].end();++it){
			if(vis.find(it->first)== vis.end()){
				vis[it->first] = 1;
				q.push(si(it->first,t.second+1));
			}
		}
	}

	return -1;
}


int main(){
	
	int p, l;
	string v1,v2;
	map<string, map<string,int> > adj;
	
	scanf("%d %d\n", &p,&l);
	while(l--){
		cin >> v1 >> v2;
		adj[v1][v2]=1;
		adj[v2][v1]=1;

	}

	printf("%d\n", bfs(adj,"Entrada","*") + bfs(adj,"*","Saida"));

	return 0;
}