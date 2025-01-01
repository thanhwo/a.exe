#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *pN = new int(n);
    for (int i=0; i<n; i++) {
        cin >> *(pN+i);
    }

    cout << *(pN+1);
    delete[] pN;
    cout << "Hello";
}