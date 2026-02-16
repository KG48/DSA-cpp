#include <bits/stdc++.h>
using namespace std;

/*Approach
Using Hashing :
Use a hashmap to count frequencies while traversing the array; return the number if its count exceeds [ n/2 ] , else return -1.
1. Make a hashmap to store element counts.
2. Traverse through each element of the array.
3. Update the frequency of each element.
4. Check if any count exceeds [n/2] during traversal.
5. Return that element if found; otherwise, return -1.*/



// Solution class containing the majorityElement function
class Solution {
public:
   // Function to find the majority element in the array
   int majorityElement(vector<int>& nums) {
       int n = nums.size();
       // Create a hash map to store frequency of each element
       unordered_map<int, int> freq;
       // Traverse the array
       for (int i = 0; i < n; i++) {
           freq[nums[i]]++;  // Increment frequency count
           // If frequency exceeds n/2, return that element as majority
           if (freq[nums[i]] > n / 2)
               return nums[i];
       }
       // If no majority element found, return -1
       return -1;
   }
};


int main() {
   // Hardcoded input array
   vector<int> nums = {2, 2, 1, 1, 2, 2, 2};
   // Create an object of Solution class
   Solution sol;
   // Call the majorityElement function
   int result = sol.majorityElement(nums);


   // Print the result
   if (result != -1)
       cout << "Majority element is: " << result << endl;
   else
       cout << "No majority element found." << endl;


   return 0;
}
