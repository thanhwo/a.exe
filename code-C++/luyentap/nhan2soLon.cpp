#include <iostream>
#include <string>

using namespace std;

string congHaiSo(string &n1, string &n2);
string nhanHaiSo(string &n1, string &n2);

int main()
{
    string n1, n2;
    cin >> n1 >> n2;
    cout << nhanHaiSo(n1, n2);
}

string congHaiSo(string &n1, string &n2) {
    int len1 = n1.length(), len2 = n2.length();
    while (len1 < len2) {
        n1 = "0" + n1;
        len1 ++;
    }
    while (len1 > len2) {
        n2 = "0" + n2;
        len2 ++;
    }
    string out;
    int remember=0;
    for (int i = len1 -1; i >= 0; i--) {
        int tong;
        tong = n1[i] +n2[i] - 2*'0' + remember;
        remember = tong / 10;
        out = to_string(tong % 10) + out;
    }
    if (remember) {
        out = "1" + out;
    }
    return out;
}

string nhanHaiSo(string &n1, string &n2) {
    int len1 = n1.length(), len2 = n2.length();
    if (n1 == "0" || n2 == "0") return "0";

    string out="0";
    for (int i = len2-1; i >= 0; i--) {
        string kq(len2 - 1 - i, '0');
        int remember = 0;
        for (int j = len1-1; j>= 0; j--) {
            int tich = (n1[j]-'0') * (n2[i]-'0') + remember;
            remember = tich / 10;
            kq = to_string(tich % 10) + kq; 
        }
        if (remember > 0) {
            kq = to_string(remember) + kq;
        }
        out = congHaiSo(kq, out); 
    }
    return out;    
}