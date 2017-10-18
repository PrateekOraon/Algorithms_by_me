//interviewbit's permutation solution using backtracking

void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void permut(vector <int> &A, int i, int n, vector<vector<int> > &V)
{
    int j;
    if (i == n)
        V.push_back(A);
    else
    {
        for (j = i; j <= n; j++)
        {
            swap(&A[i], &A[j]);
            permut(A, i + 1, n, V);
            swap(&A[i], &A[j]);
       }
   }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > V;
    permut(A, 0, A.size()-1, V);
    return V;
    
    
}
