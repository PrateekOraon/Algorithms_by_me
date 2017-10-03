//to print binary string of a number

#include <iostream>
#include <vector>
#include <string>
#include <sstream>   //std::ss
using namespace std;

void binary(int q,vector<int> &V){
    V.push_back(q%2);
    q = (int)q/2;
    if(q == 1){
        V.push_back(1);
        return;
    }
    binary(q,V);
}

int main() {
	int A;
    cin>>A;
	vector<int> V;
	binary(A,V);
	std::stringstream ss;
	for(size_t i = V.size()-1; i > 0; i--)
	{
	  
	  ss << V[i];
	}
	ss << V[0];
	
	std::string s = ss.str();
	cout<<s;
	return 0;
}