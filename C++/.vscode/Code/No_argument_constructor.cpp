#include<iostream>
#include<cmath>

using namespace std;

class Student{
    string id;
    string name;
    string sex;
    string age;
    string specialty;

public:
    Student(){
        id = "20220101";
        name = "张三峰";
        sex = "男";
        age = 19;
        specialty = "电子与计算机";
    }

    /*void set(string id1,string name1,string sex1,string age1,string specialty1){
        id = id1;name = name1;sex = sex1;age = age1; specialty = specialty1;
    }
    构造函数直接初始化，该函数无用*/
    
    void view(){//string id,string name,string sex,string age,string specialty
        cout << "学号：" << id << " 姓名：" << name << " 性别：" << sex << " 年龄：" << age << " 专业：" << specialty << endl;
    }

    /*string get(){//string id,string name,string sex,string age,string specialty
        return id;return name;return sex;return age;return specialty;
    }
    该函数用于调用类私有变量*/
};

int main(){
    Student s1;//如不用无参构造函数可在此处进行赋值("20220101", "张三峰", "男", "19", "电子与计算机");
    //s1.set("20220101", "张三峰", "男", "19", "电子与计算机");
    s1.view();
}
/*在C++中，私有成员变量只能在类的内部访问，外部无法直接访问。
但是，可以通过公有成员函数来间接访问私有成员变量，这样可以实现对类的数据成员的控制和保护。

如果某个公有成员函数不需要访问私有成员变量，那么这个函数就可以不带参数。
这种情况下，该函数可能用于实现某些功能或者执行某些操作，但不需要直接访问私有成员变量。*/

/*在C++中，公有成员函数可以直接访问类的私有成员变量，因为类的成员函数在类的作用域内可以访问所有的成员，
包括私有成员。这种方式被称为封装，通过公有接口（公有成员函数）来访问私有数据。*/