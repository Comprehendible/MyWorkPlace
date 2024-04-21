#include<iostream>

using namespace std;

class rec{
    float h;
    float w;
    float l;
public:
    rec(float x,float y,float z){
        h = x;
        w = y;
        l = z;
    }

    void s(){
        float S;
        S = 2 * (h * w  + h * l + w * l);
        cout << "矩形体的表面积：" << S << endl;
    }

    void v(){
        float p;
        p = h * w * l;
        cout << "矩形体的体积：" << p << endl;
    }
};

int main(){
    rec r(12.5, 25.2, 32.8);
    r.s();
    r.v();
}