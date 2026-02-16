#include <bits/stdc++.h>
using namespace std;


// Function to find the repeated and missing values in a grid
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
   int n = grid.size();                     		 // Grid is n x n
   int n2 = n * n;                           		// Total expected numbers from 1 to n^2
   vector<int> freq(n2 + 1, 0);            	// Frequency array to count occurrences
   // Initialise repeated and missing with -1


   int repeated = -1;
   int missing = -1;


   // Count frequency of each number in the grid
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           freq[grid[i][j]]++;
       }
   }


   // Identify repeated and missing numbers
   for (int i = 1; i <= n2; i++) {
       if (freq[i] == 2) repeated = i;       // Appears twice
       if (freq[i] == 0) missing = i;        // Not found in the grid
   }


   return {repeated, missing};               // Return result
}


int main() {
   // Example grid: 1 is repeated, 3 is missing
   vector<vector<int>> grid = {
       {1, 2},
       {1, 4}
   };


   // Call the function
   vector<int> result = findMissingAndRepeatedValues(grid);


   // Output the result
   cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;


   return 0;
}
