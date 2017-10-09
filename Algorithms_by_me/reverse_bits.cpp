//Reverse bits of an 32 bit unsigned integer


unsigned int Solution::reverse(unsigned int A) {
    unsigned int sum = 0;
	for(int i=0;i<32;i++){
		unsigned int j = pow(2,31-i);
		if((A & (1<<i)) == (1<<i)) sum += j; 
		}
	return sum;
}