#include <iostream>

using namespace std;

void nhapMang(int arr[][1000], int m, int n) {
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
}
bool matDoiXung(int arr[][1000], int m, int n) {
    if (m!=n) return false;
    for (int i=0; i<m; i++) {
        int j=i+1;
        while (arr[i][j]==arr[j][i] && j<n) {
            j++;
        }
        return false;
    }
    return true;
}
int main ()
{
    int m,n;
    cin >> m >> n;
    int arr[1000][1000];
    nhapMang(arr, m,n);
    int minV=1000, maxV=0;
    int iMax, jMax;
    int iMin, jMin;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if ((arr[i][j]) > maxV) {
                maxV = arr[i][j];
                iMax=i;
                jMax=j;
            }
            if (arr[i][j] < minV) {
                minV = arr[i][j];
                iMin=i;
                jMin=j;
            }
        }
    }
    cout << "Min :" << minV <<'\n';
    cout << "Max :" << maxV <<'\n';
    cout << matDoiXung(arr, m, n);
}