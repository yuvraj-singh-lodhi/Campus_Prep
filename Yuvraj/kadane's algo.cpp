//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include<iostream>
#include <algorithm>
class solution {
    public:
   long long maxSubarraySum(int arr[], int n){
        
        // Optimize code
        long long m = INT_MIN;
        long long sum =0;
     
        for(int i =0 ;i<n;i++)
        {
          sum +=arr[i];
          m = std ::max(m, sum);
          if(sum<0){
              sum =0;
          }
        }
        return m;
        //kadane's algo 

        long long sum = 0;
        long long maxi = arr[0];
        
        for (int i =0 ; i<n;i++)
        {
            sum =sum +arr[i];
            
            maxi = std:: max(maxi ,sum);
            if (sum<0)
            sum=0;
        }
        return maxi;
        
   }
};