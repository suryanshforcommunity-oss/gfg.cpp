int nextPrime(int n) {
    int next = n + 1;
    
    while (true) {
        bool isPrime = true;
        
        // Check if 'next' is prime
        for (int i = 2; i < next; i++) {
            if (next % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        // If it is prime, return it immediately
        if (isPrime) {
            return next;
        }
        
        next++;
    }
}
