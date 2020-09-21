// search_in_unsorted_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
using namespace std;

/** Search x in array arr of size n
    Returns index of searched element or -1 otherwise
 */
int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

void test_search() {
    int arr[] = { 10, -2, 4, 20, 13 };
    int n = sizeof(arr) / sizeof(arr[0]);
    assert(search(arr, n, -2) == 1);
    assert(search(arr, n, 6) == -1);
    assert(search(arr, n, 13) == 4);
    cout << "All tests in test_search() got passed" << endl;
}

int main()
{
    test_search();
    return 0;
}

