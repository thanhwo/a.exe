#include <iostream>
#include <vector>
#include <algorithm> // Để sử dụng std::fill

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "invalid";
        return 0;
    }

    vector<double> arr(n);
    vector<int> cuuDuoc(1000, -1);

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Kiểm tra giá trị hợp lệ của mảng
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 || arr[i] > 1) {
            cout << "invalid";
            return 0;
        }
    }

    // Tìm phần tử lớn nhất
    int max = 0;
    double max_ = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_) {
            max = i;
            max_ = arr[i];
        }
    }

    // Nếu phần tử lớn nhất nhỏ hơn 0.05 thì in ra "Het cuu"
    if (arr[max] < 0.05) {
        cout << "Het cuu";
        return 0;
    } else {
        // Nếu phần tử lớn nhất >= 0.05, tiếp tục xử lý
        cuuDuoc[max] = max;

        do {
            arr[max] = 0; // Đặt phần tử lớn nhất về 0
            max_ = 0;     // Reset giá trị lớn nhất

            // Chia đôi tất cả giá trị trong mảng
            for (int i = 0; i < n; i++) {
                arr[i] /= 2;
            }

            // Tìm phần tử lớn nhất mới
            for (int i = 0; i < n; i++) {
                if (arr[i] > max_) {
                    max = i;
                    max_ = arr[i];
                }
            }

            if (arr[max] >= 0.05) {
                cuuDuoc[max] = max;
            }
        } while (arr[max] >= 0.05);

        // In ra các chỉ số đã được cứu
        for (int i = 0; i < 1000; i++) {
            if (cuuDuoc[i] != -1) {
                cout << cuuDuoc[i] << " ";
            }
        }
    }

    return 0;
}
