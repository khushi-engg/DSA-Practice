// Find_Missing_Number.cpp

#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = (n + 1) * (n + 2) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> nums = {1, 2, 4, 5, 6};
    cout << "The missing number is: " << findMissingNumber(nums) << endl;
    return 0;
}
