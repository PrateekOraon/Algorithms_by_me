#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

void greater_number(vector<int> &A,int n,int numbr){
	if(A[n+1] > numbr) return A[n+1];
	if(n == A.size()-1) return;
	greater_number(A, n+1, numbr);
}

int main() {
	// your code goes here
	vector<int> A;
	vector<int>::iterator it;
	int numbr; //input number
	A = {8,6,2,4,9,10,9};
	sort(A.begin(),A.begin()+A.size());
	cin>>numbr;
	it = find(A.begin(), A.end(),numbr);
	int n = (it-A.begin()); //index of number not in the function part as here it will execute only once
	cout<<greater_number(A, n, numbr);
	return 0;
}