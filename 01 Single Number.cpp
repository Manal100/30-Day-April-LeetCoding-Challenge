class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    int res;
        for(map<int, int>::iterator it=mp.begin();it!=mp.end();it++){
        //cout<<it->second<<endl;
        if(it->second==1){
            //cout<<it->first<<endl;
            res=it->first;
            break;
        }
    }
    return res;
    }
};
