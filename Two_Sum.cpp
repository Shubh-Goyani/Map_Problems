#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> result;
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++){
            int j=target-arr[i];
            if(mp.find(j) != mp.end()){
                result.push_back(mp[j]);
                result.push_back(i);
            }
            else{
                mp[arr[i]]=i;
            }
        }
        return result;
    }
};