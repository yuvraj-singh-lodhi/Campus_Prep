//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
#include<iostream>
#include<unordered_map>
using namespace std;
class solution {
    public:

    int getPairsCount(int arr[], int n, int k) {
        
        if(n == 1) {
            return 0 ;
        }
        
        int count  = 0 ;
        unordered_map<int, int> mp ;
        
        for(int i=0; i<n; i++) {
            int diff = k - arr[i];
            
            if(mp[diff] > 0) {
                count += mp[diff] ;
            }
            mp[arr[i]]++ ;
        }
        
        return count ;
        
    }
};
// tc = O(n) sc = O(n)