class Solution {
public:
    bool isHappy(int n) {
        bool ans;
    map<int,int>mp;
    int x,sum,mul;
    for(int i=1; i>=1; i++)
    {
        x=n;
        sum=0;
        while(x!=0)
        {
            mul=(x%10)*(x%10);
            sum=sum+mul;
            x=x/10;
        }
        if(mp[sum]==1)
        {
            ans=false;
            break;
        }
        mp[sum]++;
        n=sum;
        if(sum==1)
        {
            ans=true;
            break;
        }
    }
         return ans;
    }

};
