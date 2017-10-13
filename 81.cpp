class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo =0, hi = nums.size()-1;
        int mid = 0;
        while(lo<hi){
              mid=(lo+hi)/2;
              if(A[mid]==target) return true;
              
              if(A[mid]>A[hi]){
                  if(A[mid]>target && A[lo] <= target) hi = mid;
                  else lo = mid + 1;
              }else if(A[mid] < A[hi]){
                  if(A[mid]<target && A[hi] >= target) lo = mid + 1;
                  else hi = mid;
              }else{
                  hi--;
              }
              
        }
        return A[lo] == target ? true : false;
    }
};