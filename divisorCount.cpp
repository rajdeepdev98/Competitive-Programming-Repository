long long noPrimeDivisors[5000100];
long long noDistinctPrimeDivisors[5000100];
bool isPrime[5000100];

void sieve(int n){
	for (int i = 1; i <= n; i++) {
		isPrime[i] = true;
    	}
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (isPrime[i] || (noDistinctPrimeDivisors[i] == 1)) {
		    for (int j = i; j <= n; j+=i) {
			++noPrimeDivisors[j];
			if (isPrime[i]) {
			    ++noDistinctPrimeDivisors[j];
			}
			if (j > i) {
			    isPrime[j] = false;
			}
		    }
		}
	}
	return;
}
