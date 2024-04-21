//利用设置默认成员函数的参数，分别输出2024年4月20日、 2024年4月28日和2024年5月2日
#include<iostream>
#include<string>
using namespace std;

class Date{
    string y;
    string m;
    string d;
public:
    Date(string d1 = "20",string m1 = "4",string y1 = "2024"){
        y = y1;
        m = m1;
        d = d1;
        cout<<"调用构造函数"<<endl<<endl;
    }

    void prt(){
        cout<<y<<"年"<<m<<"月"<<d<<"日"<<endl<<endl;

    }

    ~Date(){
        cout <<"调用析构函数"<<endl<<endl;
    }
};

int main(){
    Date p1;
    Date p2("28");
    Date p3("2","5");
    p1.prt();
    p2.prt();
    p3.prt();
}