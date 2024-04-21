#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 计算圆的周长
float calculatePerimeterCircle(float R) {
    return 2 * 3.14 * R;
}

// 计算圆的面积
float calculateAreaCircle(float R) {
    return 3.14 * R * R;
}

// 计算矩形的周长
float calculatePerimeterRectangle(float H, float W) {
    return 2 * (H + W);
}

// 计算矩形的面积
float calculateAreaRectangle(float H, float W) {
    return H * W;
}

// 计算三角形的周长
float calculatePerimeterTriangle(float A, float B, float C) {
    return A + B + C;
}

// 计算三角形的面积
float calculateAreaTriangle(float A, float B, float C) {
    float s = (A + B + C) / 2.0;
    return sqrt(s * (s - A) * (s - B) * (s - C));
}

int main() {
    // 圆
    float R_circle = 3.0;
    float L_circle = calculatePerimeterCircle(R_circle);
    float S_circle = calculateAreaCircle(R_circle);
    cout << "Cirle：L=" << fixed  << setprecision(2) << noshowpoint << L_circle << "，S=" << fixed << S_circle << endl;

    // 矩形
    float H_rect = 4.0;
    float W_rect = 6.0;
    float L_rect = calculatePerimeterRectangle(H_rect, W_rect);
    float S_rect = calculateAreaRectangle(H_rect, W_rect);
    cout << "Rectangle:L=" << fixed << setprecision(0) << noshowpoint << L_rect << ",S=" << fixed << S_rect << endl;

    // 三角形
    float A_tri = 3.0, B_tri = 4.0, C_tri = 5.0;
    float L_tri = calculatePerimeterTriangle(A_tri, B_tri, C_tri);
    float S_tri = calculateAreaTriangle(A_tri, B_tri, C_tri);
    cout << "Triangle:L=" << fixed << setprecision(0) << noshowpoint << L_tri << ",S=" << fixed << S_tri << endl;

    return 0;
}
