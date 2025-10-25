class Solution {
public:
    int totalMoney(int n) {
        int days=n,sum=0;
        for(int i=0;i<=n/7;i++){
            int monday=i+1;
            if(days/7==0)for(int j=0;j<days;j++)sum+=monday++;
            else{
                for(int j=0;j<7;j++)sum+=monday++;
                days-=7;
            }
        }
        return sum;
    }
};
