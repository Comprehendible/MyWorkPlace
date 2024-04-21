#include<iostream>
using namespace std;

class BBabk;
class GBank;
class CBabk {
private:
    int balance = 0;

public:
    void setA(int value) {
        balance = value;
    }

    int getBalance() const {
        return balance;
    }

    friend void total(CBabk& a, BBabk& b, GBank& c);
};

class BBabk {
private:
    int balance = 0;

public:
    void setB(int value) {
        balance = value;
    }

    int getBalance() const {
        return balance;
    }

    friend void total(CBabk& a, BBabk& b, GBank& c);
};

class GBank {
private:
    int balance = 0;

public:
    void setC(int value) {
        balance = value;
    }

    int getBalance() const {
        return balance;
    }

    friend void total(CBabk& a, BBabk& b, GBank& c);
};

void total(CBabk& a, BBabk& b, GBank& c) {
    int t;
    t = a.getBalance() + b.getBalance() + c.getBalance();
    cout << t << "万" << endl;
}

int main() {
    CBabk a;
    BBabk b;
    GBank c;
    a.setA(2800); // 存款数以整数形式表示
    b.setB(3300);
    c.setC(2000);
    cout<<"三个银行的总存款数是:"<<endl;
    total(a, b, c);
    return 0;
}
