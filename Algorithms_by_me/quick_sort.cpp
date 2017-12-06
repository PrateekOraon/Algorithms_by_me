//C++ implementaion of quick_sort algorithm


#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int partition(vector<int> &A, int s, int e, int pivot){
	int x = A[pivot];
	while(s<e){
		if(A[s] > x){
			swap(A[s],A[e]);
			e--;
		}
		else s++;
		if(A[e] < x){
			swap(A[s],A[e]);
			s++;
		}
		else e--;
	}
	for(int i=0;i<A.size();i++){
		if(A[i] == x)
		return i;
	}
}

void quicksort(vector<int> &A,int s, int e){
	if(s >= e) return;
	int pivot = e;
	int index = partition(A,s,e,pivot);
	quicksort(A,s,index-1);
	quicksort(A,index+1,e);
}

int main() {
	vector<int> A = {5,8,13,99,1};
	quicksort(A,0,A.size()-1);
	for(int i=0;i<A.size();i++){
		cout<<A[i]<< " ";
	}
	return 0;
}