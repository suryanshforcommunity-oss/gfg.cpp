class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int revdigit=0;
        while(n!=0){
            int rem=n%10;
            revdigit=revdigit*10+rem;
            n=n/10;
        }
        return revdigit;
    }
};