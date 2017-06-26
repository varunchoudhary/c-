#include<iostream>
using namespace std;
struct graph{
	int v;
	int e;
	int **adj; 
};
struct graph *adjmatrix(){
	int u,v,i;
	struct graph *g;
	if(!g){
	cout<<"memory error";
		return g;
	}
	g->v=4;
	g->v=5;
	g->adj=new int *[g->v];
	for(int i=0;i<g->v;i++)
		g->adj[i]=new int [g->v];
	for(int u=0;u<g->v;i++){
		for(int v=0;v<g->v;i++)
			g->adj[v][v]=0;			
	}
	for(int i=0;i<g->e;i++)
	{
		cin>>u;
		cin>>v;
		g->adj[u][v]=1;
		g->adj[v][u]=1;
	}
	return g;	
}

int main(){
	struct graph *p;
	p=adjmatrix();
		for(int i=0;i<p->v;i++){
			for(int j=0;j<p->v;j++){
				cout<<p->adj[i][j]<<" ";
			}
			cout<<endl;
		}
}	

