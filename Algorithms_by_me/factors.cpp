//factors of a number without using for loop

void factors(int A,int x,vector<int> &V){
    if(x == A+1) return;
    if(A%x == 0) V.push_back(x);
    x++;
    factors(A,x,V);
}

vector<int> Solution::allFactors(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> V;
    int x = 1;
    factors(A,x,V);
    return V;
}