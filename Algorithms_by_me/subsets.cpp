// to generate all possible subsets

#include <iostream>
#include <vector>
using namespace std;
 
 
void genSubsets(vector<int>&A,int start,vector<int>&ans,vector<vector<int>>&res)
{
    res.push_back(ans);
    for (int i=start; i<A.size();i++)
    {
        ans.push_back(A[i]);
        genSubsets(A,i+ 1,ans,res);
        ans.pop_back();
    }
}

int main() {
	// your code goes here
	vector<int> A = {3,2,4,5};
	vector<vector<int>>vec;
            vector<int>ans;
            genSubsets(A,0,ans,vec);
	for (int i = 0; i < vec.size(); i++)
	{
	    cout<<"{ ";
	    for (int j = 0; j < vec[i].size(); j++)
	    {
	        cout << vec[i][j];
	        if(j == vec[i].size()-1) break;
	        cout<<",";
	    }
	    cout<<" } ";
	}
 
	return 0;
}