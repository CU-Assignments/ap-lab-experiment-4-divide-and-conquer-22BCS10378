// Number of 1 Bits 

class Solution {
public:
    int hammingWeight(int n) {
       bitset<32> b(n); 
       int ans=0;
       for(size_t i=0;i<b.size();i++){
        if(b[i]==1) ans++;
       }
       return ans;
    }
};

// Case 1: Input n = 11 Output 3 Expected 3


