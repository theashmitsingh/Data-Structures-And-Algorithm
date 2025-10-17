#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            maxSum = max(sum, maxSum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxSum;
    }
};

int main () {

    Solution sol;
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    int result = sol.maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}