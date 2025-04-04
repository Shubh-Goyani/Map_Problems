#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,bool>mp;
        for(int num:nums){
            mp[num]=true;
        }
        int ans=0;

        for(auto num : mp){
            if(mp.find(num.first-1)==mp.end()){
                int currnum=num.first;
                int streak=1;

                while(mp.find(currnum+1)!=mp.end()){
                    currnum++; streak++;
                }
                ans=max(ans,streak);
            }
        }
        return ans;
        
    }
};
