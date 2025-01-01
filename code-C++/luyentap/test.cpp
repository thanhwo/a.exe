#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    
    ///Hàm tạo - Tạo ra một Vector với thành phần dữ liệu đã biết trước
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    
    ///Hàm in ra màn hình một Vector
    void printVector(){
        cout << x << " " << y << endl;
    }
};

///Hàm tính tổng 2 Vector trả về Vector tổng sau khi tính toán
Vector addVector(const Vector &v1, const Vector &v2)
{
    Vector sum(v1, v2);
    // Them code cua ban o day
    return sum;
}

int main()
{
    Vector v1, v2;
    v
    // Them code cua ban o day
}v1