//
// Created by Ashish on 19-06-2022.
//
#include "iostream"

using namespace std;

int binarySearch(int len, int arr[], int element)
{
    int start = 0;
    int end = len -1;

    while (start!=end) {
        int mid = (start + end) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        else if (arr[mid] > element) {         
           end = mid - 1;
        } 
        else if (arr[start] < element) {
            start = mid + 1;
        } 
    }

    return -1;

}

int main()
{
    int arr[] = {6, 21, 48, 91};

    cout<<binarySearch(4, arr, 48);

    return 0;
}