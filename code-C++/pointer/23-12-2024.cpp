#include <iostream>

using namespace std;

// void changeVal(int *pA) {
//     for(int i=0; i<4; i++) {
//         *(pA +i) *= -1;
//     }
// }
// void input(int *pArr, int n) {
//     for (int i=0; i<n; i++) {
//         cin >> *(pArr+i);
//     }
// }

int main()
{
    int row, col;
    cin >> row >> col;
    int **matrix = new int *[row];
    for (int i=0; i<row; i++) {
        matrix[i] = new int[col];
    }
    for (int)
    
    // int a = 10, b=5, *pA=&a, *pB=&b;
    // int *pArr[2] = {pA, pB};
    // int **pAll = &pArr[00];


    // pA=pB;
    // cout << pB <<" ";
    // cout << pA;
    // cout << "\n" << *pA;

    // int *pArr= new int(n);
    // delete[] pArr;

    // int arr[10] = {1,2,3,4};
    // cout << &arr[0] << '\n';
    // int *pArr = &arr[0];
    // cout << &arr[3] << '\n';
    // changeVal(pArr);
    // for (int i=0; i<4; i++) {
    //     cout << arr[i] <<" ";
    // }
    // int a=10, *pA = &a;
    // cout << pA << '\n';
    // cout << &a;
}