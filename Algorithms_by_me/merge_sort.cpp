//C++ implementation of merge_sort algorithm


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &A, int s, int mid, int mid2, int e){
	int q = s;
	vector<int> C(e-s+1);
	int i = 0;
	while(s<=mid && mid2<=e){
		if(A[s] <= A[mid2]){
			C[i] = A[s];
			s++;
			i++;
		}
		else if(A[s] > A[mid2]){
			C[i] = A[mid2];
			mid2++;
			i++;
		}
	}
	if(s > mid){
		for(int y=mid2;y<=e;y++) {C[i] = A[y];i++;}
	}
	else if(mid2 > e){
		for(int y=s;y<=mid;y++) {C[i] = A[y];i++;}
	}
	for(int x=0;x<C.size();x++){
		A[q] = C[x];
		q++;
	}
}

void merge_sort(vector<int> &A, int s, int e){
	if(s>=e) return;
	int mid = (s+e)/2;
	merge_sort(A,s,mid);
	merge_sort(A,mid+1,e);
	merge(A,s,mid,mid+1,e);
}



int main() {
	vector<int> A = {7,3,1,2,4,6};
	merge_sort(A,0,A.size()-1);
	for(int i=0;i<A.size();i++){
		cout<< A[i]<<" ";
	}
	return 0;
}