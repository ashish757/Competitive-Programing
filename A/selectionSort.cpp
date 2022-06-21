
#include "iostream"

using namespace std;

void selectionSort(int len, int arr[]) {

    for (int i = 0; i < len -1; i++) {
        // cout<<"loop"<<endl;
            for (int j = i + 1; j < len; j++) {
        

            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }


                    // for (int n = 0; n < len; n++) {
                    //     cout<<arr[n]<<" ";
                    // }
                    // cout<<endl;
            }
    }

}

int main(){
    int arr[] = {4356,678,219,12,90};
    
    selectionSort(sizeof(arr)/sizeof(int), arr);
    
    for (int e: arr) {
        cout<<e<<" ";
    }

    return 0;
}