#include <iostream>

using namespace std;

int main() 
{
    int m,n;
    cin >> m >> n;
    int stu[m]={0};
    double diem[100][100];
    for (int i=0; i<m; i++) {
        stu[i] = i+1;
        for (int j=0; j<n; j++) {
            cin >> diem[i][j];
        }
    }
    int monHoc;
    cin >> monHoc;
    monHoc -=1;
    for (int i=0; i<m; i++) {
        for (int h=i+1; h<m; h++)
        // sap xep diem cao nhat cua mon duoc chon len
        if (diem[i][monHoc]<diem[h][monHoc]){
            // doi cho cac hang theo mon da duoc chon
            for (int j=0; j<n; j++) {
                swap (diem[i][j], diem[h][j]);
                swap (stu[i], stu[h]);       
                
            }
        }
    }
    for (int i=0; i<m; i++) {
        cout << "Sinh vien " << stu[i] << ": ";
        for (int j=0; j<n; j++) {
            cout << diem[i][j] <<" ";
        }
        cout << '\n';
    }
}