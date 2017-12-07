//c++ implementaion of bubble_sorting algorithm

#include <iostream>
#include <vector>

using namespace std;

int sorted(vector<int> A, int n){
	for(int i=0;i<A.size()-1;i++){
		if(A[i]>A[i+1]) return 0;
	}
	return 1;
}

void bubble_sort(vector<int> &A,int n){
	for(int i=0;i<n-1;i++){
		if(A[i]>A[i+1]) swap(A[i],A[i+1]);
	}
	if(sorted(A,n))return;
	else bubble_sort(A,n);
}

int main() {
	// your code goes here
	vector<int> A = {7,3,1,2,4,100,300};
	bubble_sort(A,A.size());
	for(int i=0;i<A.size();i++){
		cout<< A[i]<<" ";
	}
	return 0;
}