1281.Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int s=0;
        int p=1;
        while(n>0)
        {
            int d=n%10;
            p=p*d;
            s=s+d;
            n=n/10;
        }
        int res=p-s;
        return res;
    }
};
