//https://leetcode.com/problems/next-permutation/description/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() , j =-1; 

        for(int i = n- 2; i>=0 ; i--)
        {
           if( nums[i+1] > nums[i] )
           {
               j= i;
            break;
           }
        }
        if(j==-1)
        {
            reverse(nums.begin() , nums.end());
        }
        else
        {
        for(int i = n-1; i>=j ;i--)
        {
            if(nums[i]>nums[j])
            {
                swap(nums[i], nums[j]);
                break;
            }
        }
        reverse(nums.begin()+j +1,nums.end());
        }
    }
};

// time complexcity = O(2n) space complexcity = O(1)