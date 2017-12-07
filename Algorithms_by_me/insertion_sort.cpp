//c++ implementation of insertion_sort algorithm

#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &A, int n){
	int j;
	for(int i=1;i<n;i++){
		j=i;
		while(A[j] < A[j-1] && j>0){
			int temp = A[j];
			A[j] = A[j-1];
			A[j-1] = temp;
			j--;
		}
	}
}

int main() {
	// your code goes here
	vector<int> A = {7,3,1,2,4,6};
	insertion_sort(A,A.size());
	for(int i=0;i<A.size();i++){
		cout<< A[i]<<" ";
	}
	return 0;
}