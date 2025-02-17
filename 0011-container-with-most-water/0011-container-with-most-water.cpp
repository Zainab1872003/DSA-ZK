#include <bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = -1;
        int area = 0;
        int lp = 0;
        int rp = height.size()-1;
        for(int i = 0;i<height.size();i++){
          area = (min(height[lp],height[rp])) * (rp-lp);
          if(area>max){
            max = area;
          }
          if(height[lp]<height[rp]){
            lp++;
          }
          else{
            rp--;
          }
        }
        return max;
    }
};