//if there exists a subset in A which 'adds' up to the sum 'sum'

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> A ={2,3,7,10};   //enter your input array here
	int sum = 11;                  // enter your input sum
	int table[A.size()+1][sum+1];
	for(int i=0;i<A.size()+1;i++){
		table[i][0] = 1;
	}
	for(int i=0;i<sum+1;i++){
		table[0][i] = 0;
	}
	for(int i=1;i<A.size()+1;i++){
		for(int j=1;j<sum+1;j++){
			if(j<A[i-1]) table[i][j] = table[i-1][j];
			else table[i][j] = table[i-1][j] || table[i-1][j-A[i-1]];
		}
	}
	cout<< table[A.size()][sum];
	return 0;
}