#include <iostream>
using namespace std;

int main() {

    //Time Complexity =  

    
    int arr[7] = {-2, 2, 3 , 6, 8, 10, 15};

    int target = 20;

    int st = 0, end = 6 ;
    
    while(st <= end) {

        int mid = st + (end - st)/2;
        if(target == arr[mid]){
            cout << "Element " << target << " is found at location " << mid + 1;
            return 0;

        }else if(target > arr[mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element is not available in the list " <<endl;
    // return -1;
}