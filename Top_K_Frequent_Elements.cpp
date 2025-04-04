#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> freq;

        for(auto val : nums){
            freq[val]++;
        }

        vector<pair<int,int>> rev;
        for(auto pr : freq){
            rev.push_back({pr.second,pr.first});
        }

        sort(rev.rbegin(),rev.rend());
        for(int i=0;i<k;i++){
            result.push_back(rev[i].second);
        }

        return result;
    }
};