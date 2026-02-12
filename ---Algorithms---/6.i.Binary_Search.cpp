#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int BinarySearch(vector<int> arr, int target) {

    int st = 0; int end = arr.size() - 1;

    while(st <= end) {
        int mid = (st + end)/2;

        if(target > arr[mid]){
            st = mid + 1;
        }else if(target < arr[mid]) {
            end = mid - 1;
        }else 
        return mid;
    }

    return -1 ;
}
int main() {


    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};     //odd size 
    int target1 = 12;

    cout << "Location :- "<< BinarySearch(arr1, target1) + 1 << endl;

    
    vector <int> arr2 = {-1, 0, 3, 5, 9, 12};     //even size
    int target2 = 0;

    cout << "Location :- " << BinarySearch(arr2, target2) + 1 << endl;

    return 0;

}