#include <bits/stdc++.h>
using namespace std;

/*Approach
Using Boyer-Moore Voting Algorithm :

Moore’s Voting Algorithm works by canceling out different elements against each other. Since the majority element appears more than half the time, it survives this cancellation and becomes the final candidate. We then verify if it's truly the majority element or not.

1. Make the first element (nums[0]) the majority candidate, and its count = 1.
2. Iterate over the Array to Find a Possible Candidate
        Iterate the array:

Increase the count of the candidate and the current element match
If it doesn’t match, decrease the count
If the count becomes zero, update the current element as the new candidate and reset the count to 1.
3. Check if the Candidate is Majority element or not

After identifying a candidate, traverse the array and count its frequency.
Return it as the majority if it occurs more than n/2 times. Return -1 otherwise.*/


// Solution class containing the majorityElement function
class Solution {
public:
   int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int count = 1;
       int majority = nums[0];  // Assume the first element as majority candidate


       // Phase 1: Find a potential candidate using Moore’s Voting Algorithm
       for (int i = 1; i < n; i++) {
           if (nums[i] ==majority)
               count++;     // Same as candidate ? increase count
           else {
               count--;     // Different element ? decrease count
               if (count == 0) {
                   majority= nums[i];  // Change candidate
                   count = 1;
               }
           }
       }


       // Phase 2: Verify if the candidate is actually the majority
       count = 0;
       for (int i = 0; i < n; i++) {
           if (nums[i] == majority)
               count++;
       }
       // Check if it occurs more than n/2 times
       if (count > n / 2)
           return majority;
       else
           return -1;
   }
};


int main() {
   // Hardcoded array
   vector<int> nums = {2, 2, 1, 1, 2, 2, 2};


   // Create object and call the method
   Solution sol;
   int result = sol.majorityElement(nums);




   // Print result
   if (result != -1)
       cout << "Majority element is: " << result << endl;
   else
       cout << "No majority element found." << endl;


   return 0;
}
