#include <iostream>

using namespace std;
void xoaPhanTu(double arr[], int n, int k) {
    for (int i=k; i<n; i++) {
        arr[i]= arr[i+1];
    }
}
// void chenKyTu(double arr[], int n,int x, int k) {
//     for (int i=n; i>k; i--) {
//         arr[i]= arr[i-1];
//     }
//     arr[k]=x;
// }

int main()
{
    int n, k;
    // double x;
    cin >> n  >> k;
    double arr[n + 1];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    // chenKyTu(arr, n, x,k);
    for (int i=0; i<=n; i++) {
        cout << arr[i] << " ";
    }
    xoaPhanTu(arr, n,k);
    for (int i=0; i<n-1; i++) {
        cout << arr[i] << " ";
    }

}