// to detect cycle in a directed graph ( C++ implementation )


#include <iostream>
#include <vector>
using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    
public:    
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }
    
    void addEdge(int x, int y){
        adj[x].push_back(y);
    }
    
    int iscyclicUnit(int parent, vector<int> &visited, vector<int> &restack){
    
        visited[parent] = 1;
        restack[parent] = 1;

        vector<int>::iterator it;

        for(it = adj[parent].begin();it != adj[parent].end();++it){
            if(visited[*it] != 1 && iscyclicUnit(*it, visited, restack)) return 1;
            else if(visited[*it] == 1 && restack[*it] == 1) return 1;
        }
        restack[parent] = 0;
        return 0;
    }

    int iscyclic(){

        vector<int> visited(V,0);
        vector<int> restack(V,0);

        for(int i=0;i<V;i++){
            return iscyclicUnit(i, visited, restack);
        }
    }

    
};


int main() {
	// your code goes here
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 

	
	cout<<g.iscyclic();
}
