//to find all prime number upto A in n*loglogn time


vector<int> sieve(int A) {
    vector<int> V(A+1,1);
    vector<int> Z;
    
    V[0] = 0;
    V[1] = 0;
    for(int i=2;i<=(int)sqrt(A);i++){
        if(V[i] == 1){
            for(int j=2;i*j<=A;j++){
                V[i*j] = 0;
            }
        }
    }
    for(int i=0;i<V.size();i++){
        if(V[i]==1) Z.push_back(i);
    }
    return Z;
}
