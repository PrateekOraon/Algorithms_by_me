// length of longest Subsequence which is in Arithmetic Progression in an array

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main(){

	vector<int> A = {100, 10, 8, 300, 6, 1, 4, 2};  //your input array
	int max = 0;
	unordered_map<int, set<int>> M;
	for(int i=1;i<A.size();i++){
		for(int j=0;j<i;j++){
			M[A[i]-A[j]].insert(i);
		}
	}
	for (unordered_map<int,set<int>>::iterator it=M.begin(); it!=M.end(); ++it){
	    if(it->second.size() > max) max = it->second.size();
	}
	cout<<max+1;
	return 0;
}