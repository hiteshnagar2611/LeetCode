class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        int digit;
        while(n>0){
            digit=n%10;
            pro=pro*digit;
            sum=sum+digit;
            n=n/10;
        }
        return (pro-sum);
    }
};
