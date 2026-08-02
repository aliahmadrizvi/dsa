#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int size = nums.size();

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {
        if (target == nums[mid]) {
            ans = mid;
            end = mid - 1;
        }
        else if (target > nums[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    int first = ans;

    start = 0;
    end = size - 1;
    mid = start + (end - start) / 2;
    ans = -1;

    while (start <= end) {
        if (target == nums[mid]) {
            ans = mid;
            start = mid + 1;
        }
        else if (target > nums[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    int second = ans;

    return {first, second};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}