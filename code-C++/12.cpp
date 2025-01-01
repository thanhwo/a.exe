#include <iostream>
using namespace std;

// Hàm tính vị trí sống sót trong trò chơi sinh tử
int josephus(int n, int k) {
    // Cơ sở: chỉ còn 1 người thì người đó sống sót tại vị trí 0
    int result = 0; // Vị trí sống sót khi chỉ có 1 người (chỉ số 0)
    
    // Tính từ 2 người lên đến n người
    for (int i = 2; i <= n; i++) {
        result = (result + k) % i;
    }
    
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;  // Nhập vào số người n và số bước đếm k
    
    // Tính toán và chuyển đổi từ chỉ số 0 sang chỉ số 1
    int survivor = josephus(n, k) + 1;
    
    cout << "Vị trí an toàn là: " << survivor << endl;
    return 0;
}
