#include <iostream>

// 交换函数，形参使用指针变量
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y, z;
    
    // 输入三个整数
    std::cout << "please input three digitals" << std::endl;
    std::cin >> x >> y >> z;

    // 使用指针进行排序
    if (x > y) {
        swap(&x, &y);
    }
    if (x > z) {
        swap(&x, &z);
    }
    if (y > z) {
        swap(&y, &z);
    }

    // 输出排序结果
    std::cout << "sorted result:  " << x << " , " << y << " ," << z << std::endl;

    return 0;
}