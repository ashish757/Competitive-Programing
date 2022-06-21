//
// Created by Ashish on 19-06-2022.
//
#include "iostream"

using namespace std;

int binarySearch(int len, int arr[], int element)
{

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == element) {
            return 1;
        }
    }

    return -1;

}

int main()
{
    int arr[] = {45, 6, 98, 21};

    cout<<binarySearch(4, arr, 6);

    return 0;
}