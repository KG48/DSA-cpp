#include <iostream>  // two pointer solution 
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> &nums, int target) {

    int i = 0; int j = nums.size() - 1;
    vector<int> ans;

    while(i < j) {

        if(nums[i]+ nums[j] > target) {
            j--;
        }
        else if(nums[i] + nums[j] < target) {
            i++;
        }
        else if(nums[i] + nums[j] == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
} 


int main() {

    vector <int> vec = {2, 7, 11, 13, 15};

    vector<int> result = PairSum(vec, 9);

    if (!result.empty()) {
        cout << result[0] << " " << result[1];
    }


    return 0;
}