#include<iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    cout << "������������Ȼ��" << endl;
    int a, b;
    cin >> a >> b;
    cout << "���Լ���ǣ�" << gcd(a, b) << endl;
    cout << "��󹫱����ǣ�" << a * b / gcd(a, b) << endl;


}