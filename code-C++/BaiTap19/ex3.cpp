#include <iostream>

using namespace std;

void insertArr(int arr[], int &n, int iV, int iP) {
    for (int i=n; i> iP; i--) {
        arr[i]=arr[i-1];
    }
    n++;
    arr[iP]=iV;
}
void deleteArr(int arr[], int &n, int iP) {
    
}
int main()
{
    int n;

}