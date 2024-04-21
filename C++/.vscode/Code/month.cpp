#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};//指针数组的每个元素可以存放一个指向字符数组（即字符串）的指针
    const char **p = month;
    int i;

    while (true) {
        cout << "请输入月份？" << endl;
        cin >> i;

        if (i >= 1 && i <= 12) {
            cout << *(p + (i - 1)) << endl;
        } else {
            cout << "输入错误，请重新输入！" << endl;
            continue;
        }

        char y;
        cout << "继续输入吗(Y/N)?" << endl;
        cin >> y;

        if (y == 'N' || y == 'n') {
            break;
        }
    }

    system("pause");
    return 0;
}
