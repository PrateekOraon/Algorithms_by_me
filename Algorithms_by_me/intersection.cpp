// intersection of two sorted arrays


vector<int> intersect(const vector<int> &A, const vector<int> &B) {
    int j = 0;
    vector<int> V;
    for(int i = 0;i<A.size();i++){
        first:
        if(j == B.size()) break;
        if(A[i] == B[j]){
            V.push_back(A[i]);
            j++;
        }
        else if(A[i]>B[j]) { j++;goto first;}
    }
    return V;
}