//C++ implementation of selection sorting algorithm

#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int minimum(vector<int> A,int n, int start){
	int m = INT_MAX, x;
	for(int i=start;i<n;i++){
		if(A[i] < m){
			m = A[i];
			x = i;
		}
	}
	return x;
}

void selection_sort(vector<int> &A, int n){
	int i = 0;
	while(i < n){
		int index = minimum(A,n,i);
		swap(A[index],A[i]);
		i++;
	}
}

int main() {
	// your code goes here
	vector<int> A = {7,3,1,2,4,6,100};
	selection_sort(A,A.size());
	for(int i=0;i<A.size();i++){
		cout<< A[i]<<" ";
	}
	return 0;
}