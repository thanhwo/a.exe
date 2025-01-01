#include <iostream>

using namespace std;

bool kiemTraTuTrongXau(string input, string key, int &count) {
    int soKyTuGiong = 1, len = key.length();
    while (input[count + soKyTuGiong] == key[soKyTuGiong]) 
    {
        /* code */soKyTuGiong++;
    }
    count+=len-1;
    if (soKyTuGiong == len) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string input;
    getline(cin, input);
    string key;
    getline(cin, key);
    int count = 0, dem = 0 ;
    while (input[count] != '\0') {
        if (input[count] == key[0]) {
            if (kiemTraTuTrongXau(input, key, count)) {
            dem++;
            }
        }
        else{
        count++;
        }
    }
    cout << dem;
}
