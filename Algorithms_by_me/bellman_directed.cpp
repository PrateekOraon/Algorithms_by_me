//bellman_ford algorithm for shortest path for a directed graph(C++ implementation)


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge{
    int src, weight, destination;
};

struct Graph{
    int V, E;
    struct Edge *edge;
    
public:

    void createGraph(int V, int E){
        this->V = V;
        this->E = E;
        edge = new Edge[E];
    }
    
    void addEdge(int i, int src, int w, int dest){
        edge[i].src = src;
        (edge+i)->weight = w;
        (edge+i)->destination = dest;
        
    }
    void print(vector<int> dist, int src){
        for(int i=0;i<V;i++){
            cout<<src<<" to "<<i<<"----";
            if(dist[i] != INT_MAX) cout<<dist[i]<<endl;
            else cout<<"no path"<<endl;
        }
    }
    void bellman_ford(int src){
        vector<int> dist(V,INT_MAX);
        dist[src] = 0;
        for(int i=0;i<V;i++){
            for(int j=src;j<E;j++){
                j %= E;
                int u = edge[j].src;
                int v = edge[j].destination;
                int w = edge[j].weight;
                if(dist[u] != INT_MAX && dist[v] > dist[u]+w ) dist[v] = dist[u]+w;
                if(j == src-1) break;
            }
        }
        print(dist,src);
    }
};


int main() {
    
	struct Graph *g = new Graph;
	g->createGraph(6, 8);                      //     1--3 
	g->addEdge(0,0,2,1);                       //    /\  /\                   
	g->addEdge(1,0,2,2);                       //   0  \/  5  
	g->addEdge(2,1,8,3);                       //    \ /\ / 
	g->addEdge(3,4,6,2);                       //     2--4
	g->addEdge(4,2,15,3);                        
	g->addEdge(5,1,4,4);
	g->addEdge(6,3,10,5);
	g->addEdge(7,4,4,5);
	g->bellman_ford(1);  //enter your source point
}
