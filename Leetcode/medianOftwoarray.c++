#include<iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int mini_nums1 = nums1[0];
        int maxi_nums1 = nums1[n-1];
        int m = nums2.size();
        int mini_nums2 = nums2[0];
        int maxi_nums2 = nums2[m-1];

        float mini = min(mini_nums1, mini_nums2);
        float maxi = max(maxi_nums1, maxi_nums2);
        float median = (mini + maxi)/2;
        return median;
    }

int main(){
    vector<int>arr = {1,2};
    vector<int>arr2 = {3, 4};
    cout<<findMedianSortedArrays(arr, arr2);
}