class Solution {

public:
    int mod = (1e9) + 7;

    int bigmod(long long a, long long b){
        if (b == 0) return 1;

        long long res = bigmod(a, b/2);
        res = ((res % mod) * (res % mod) ) % mod;
        if(b % 2 == 1) res = (res * a) % mod;

        return res%mod;
    }
    int countGoodNumbers(long long n) {
        if(n == 1) return 5;
        long long ans = bigmod(5, (n+1)/2);
        ans *= bigmod(4, n/2);


        return ans%mod;
    }
};