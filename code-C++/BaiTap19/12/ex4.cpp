#include <iostream>

using namespace std;
string dec2bin(int n){
    string rs;
    while (n>0) {
        char tmpChar = (n%16) + '0';
        rs=tmpChar+rs;
    }
    return rs;
}
int main()
{
    int n;
    cin >> n;
}