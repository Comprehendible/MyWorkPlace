#include<iostream>
#include<string>

using namespace std;

class Score{
    float math;
    float c;
    float eng;
public:
    Score(float x,float y,float z){  //构造函数
        math = x;
        c = y;
        eng = z;   //构造函数第一种初始化定义
    }
    double getMathScore() { return math; }
    double getCScore() { return c; }
    double getEnglishScore() { return eng; }
};
class Student{
    string name;
    string num;
    Score scores; //注意：在定义类Student的构造函数时，必须缀上Score类对象成员的名字
public:
    Student (string n, string id, double math, double c, double eng) : //在C++中，构造函数只能在对象创建时由编译器自动调用，不能像普通函数一样手动调用。
    name(n), num(id), scores(math ,c , eng){}  //构造函数第二种初始化定义    
    //scores(math ,c , eng) 这句是定义 Score 对象，在 class Student 对象创建时调用的
    string getName(){
        return name;
    }
    string getNum(){
        return num;
    }
    
    void viewscores(){
        cout << "学生姓名：" << getName() << "  学号：" << getNum() << endl;
        cout << "数学：" << scores.getMathScore() << ",C语言：" << scores.getCScore() << "英语:" << scores.getEnglishScore() << endl;
    }
};

int main(){
    Student a("胡永","2022011",98.3,98.6,99.1);
    Student b("李力","2022015",98.8,98.5,99.5);
    a.viewscores();
    cout << endl;
    b.viewscores();
}