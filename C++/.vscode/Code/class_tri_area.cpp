#include<iostream>
#include<cmath>
using namespace std;
class tri{
    float a,b,c;
public:
    tri(float a1,float b1,float c1){
        a = a1;
        b = b1;
        c = c1;
    }
    void area(float a1,float b1,float c1){
        double s,S;
        if (a1+b1>c1 && a1+c1>b1 && b1+c1>a1){
            s = (a1 + b1 + c1) / 2;
            S = sqrt(s * (s - a1) * (s - b1) * (s - c1));
            cout<<"输入的三条边能构成三角形，其面积是: "<<S<<endl;
        }
        else cout<<"输入的三条边不能构成三角形。"<<endl;
    }
};

int main(){
    float a,b,c;
    cout << "请输入三角形的三边: "<<endl;
    tri t(a,b,c); 
    cin >> a >> b >> c;
    t.area(a,b,c);
}