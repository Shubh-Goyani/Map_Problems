#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            map<int, set<char>> rp;     
            map<int, set<char>> cp;    
            map<pair<int, int>, set<char>> bp;   
    
            for (int i = 0; i < 9; ++i) {
                for (int j = 0; j < 9; ++j) {
                    char num = board[i][j];
    
                    if (num == '.') continue;  
    
                    if (rp[i].count(num)) return false;
    
                    if (cp[j].count(num)) return false;
    
                    pair<int, int> crd = {i / 3, j / 3};
                    if (bp[crd].count(num)) return false;
    
                    rp[i].insert(num);
                    cp[j].insert(num);
                    bp[crd].insert(num);
                }
            }
    
            return true;
        }
    };