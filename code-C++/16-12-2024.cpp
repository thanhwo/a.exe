#include <iostream>

using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    }
} //mqtt
int main()
{
    int arr[5] = {4,8,2,0,9}, n = 5;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[j+1]< arr[j]) {                              //bubble sort
                swap(arr[j+1], arr[j]);
                print (arr, n);
                cout << '\n'
            }
        }
    }
    /*for (int i=0; i<n; i++) {
        int j=i;
        while (arr[j] < arr[j-1] && j>=1) {                     // insertion sort
            swap (arr[j], arr[j-1]);
            j--;
            print (arr, n);
            cout << '\n';
        }
    }*/
    print(arr,n);
    /*for (int i = 0; i<n; i++) {
        int arg_min = i, min_ = arr[i];
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[i]) {                              //selection sort
                arg_min = j;
                min_ = arr[j];
            }
        }
        swap(arr[i], arr[arg_min]);
    }
    print(arr, n);*/
}