class Solution {
public:
    int reverseBits(int n) {
        vector<int>Bits;
        uint32_t un = n;
        for (int k = 0; k < 32; k++) {
            int bit = un % 2;
            Bits.push_back(bit);
            un /= 2;
        }
        int m=Bits.size();
        long long reverseBit=0;
        long long i=1;
        int j=m-1;
        while (j>=0) {
            reverseBit+=Bits[j]*i;
            j--;
            i*=2;
        }
        
        return (int)reverseBit;

    }
};