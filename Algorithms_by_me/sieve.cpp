//function to create sieve of erastothenes (list of all prime numbers before a given number) - (implementation in C++)


vector<int> sieve(int A){       //enter a number
	vector<int> B(A+1,1);
	B[0] = 0, B[1] = 0;
	for(int i=2;i<=(int)sqrt(A);i++){
		if(B[i] == 1){
			for(int j=2;i*j<=A;j++){
				B[i*j] = 0;
			}
		}
	}
	return B;
}