#include<iostream>
using namespace std;
class Tong{
    int a, b;
public:
    Tong(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int TinhTong() {
        return a + b;
    }
};

int main() {
    int A, B;
    cin >> A>>B;
    Tong s(A, B);
    cout  << s.TinhTong() << endl;
    return 0;
}
