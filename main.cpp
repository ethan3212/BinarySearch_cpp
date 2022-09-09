#include <iostream>
#include <vector>
using namespace std;

// O(log(n)) time | O(1) space
int binarySearch(vector<int> array, int target) {
    int lowerBound = 0;
    int upperBound = array.size() - 1;
    while(lowerBound <= upperBound) {
        int middle = (lowerBound + upperBound) / 2;
        if(array[middle] < target) {
            lowerBound = middle + 1;
        } else if(array[middle] > target) {
            upperBound = middle - 1;
        } else {
            return middle;
        }
    }
    return -1;
}

int main() {
    vector<int> input = {0, 1, 21, 33, 45, 45, 61, 71, 72, 73};
    int target = 33;
    cout<< binarySearch(input, target);
    return 0;
}
