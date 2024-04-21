//利用设置默认成员函数的参数，分别输出2024年4月20日、 2024年4月28日和2024年5月2日
#include<iostream>
#include<string>
using namespace std;

class Date{
    string y;
    string m;
    string d;
public:
    Date(string d1 = "26",string m1 = "4",string y1 = "2024"){
        y = y1;
        m = m1;
        d = d1;
        cout<<"调用构造函数"<<endl;
    }

    void prt(){
        cout<<y<<"年"<<m<<"月"<<d<<"日前完成作业"<<endl;

    }

    Date(const Date& other) {
    y = other.y;
    m = other.m;
    d = other.d;
    cout << "调用Copy构造函数"<<endl;
}

    ~Date(){
        cout <<"调用析构函数"<<endl;
    }
};

int main(){
    Date d1;
    Date d2(d1);
    Date d3 = d1;
    d1.prt();
    d2.prt();
    d3.prt();
}