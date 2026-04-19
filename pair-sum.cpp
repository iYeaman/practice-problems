#include<iostream>
#include<vector>
using namespace std;

// Brute-Force Method (T.C = O(n^2))
// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (nums[i] + nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

//Optimal Solution (T.C = O(n))
vector<int> pairSum(vector<int>nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j) {
        int pSum = nums[i] + nums[j];
        if(pSum > target) {
            j--;
        } else if(pSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1];
    return 0;
}