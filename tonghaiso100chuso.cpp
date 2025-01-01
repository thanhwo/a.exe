#include <iostream>
using namespace std;
string tongHaiNguyenDuongSo(string n1, string n2);

int main()
{
  string n1, n2;
  cin >> n1 >> n2;
  cout << tongHaiNguyenDuongSo(n1, n2);
  
}

string tongHaiNguyenDuongSo(string n1, string n2){
    int lena = n1.length(), lenb = n2.length();
    // lam cho hai so bang nhau
    if(lena < lenb){
        while (lena < lenb){
            n1 = "0" + n1;
            lena++;
        }
    }
    if(lena > lenb){
        while (lena > lenb){
            n2 = "0" + n2;
            lenb++;
        }
    }
    int carry = 0, tong[lena];
    string kq;
    for (int i= lena-1; i>=0 ; i--){
        tong[i] = n1[i] + n2[i] + carry -48 -48;
        carry = tong[i]/10;
        tong[i] %= 10;
    }
    if (carry){
        kq += to_string (carry);
    }
    for (int i=0 ; i<lena; i++){
        kq += to_string (tong[i]);
    }
    return kq;
}