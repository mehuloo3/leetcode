class Solution {
public:
    bool isPrime(int num)
    {
        if(num<2) return false;
        
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        
        vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
		for (int i = 2; i * i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
					prime[j] = false;
				}
			}
		}
        
       int count=0;
        for(int i=0;i<n;i++)
        {
            if(prime[i])
            {
                count++;
            }
        }
        return count;
        
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(isPrime(i))
        //     {
        //         count++;
        //     }
        // }
        // return count;
    }
};