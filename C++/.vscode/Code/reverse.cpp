#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str = "learningOOP";

    // 使用 reverse 函数反转字符串
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
