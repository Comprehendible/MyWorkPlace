//使用预处理器指令进行条件化编译，根据宏的定义情况编译不同的代码
#include <iostream>

using namespace std;

#define max  //定义max宏
#define maximum(x,y) (((x)>(y))?(x):(y))//定义maximum宏
#define minimum(x,y) (((x)>(y))?(y):(x))//定义minimum宏

int main()
{
    int a = 10, b = 20;

#ifdef max//根据是否被定义
    cout << " the larger one is " << maximum(a, b) << endl;
#else
    cout << " the lower one is " << minimum(a, b) << endl;
#endif//结束条件块

#ifndef min//根据是否未被定义
    cout << " the lower one is " << minimum(a, b) << endl;
#else
    cout << " the larger one is " << maximum(a, b) << endl;
#endif

#undef max//取消宏定义

#ifdef max
    cout << " the larger one is " << maximum(a, b) << endl;
#else
    cout << " the lower one is " << minimum(a, b) << endl;
#endif

#define min

#ifndef min
    cout << " the lower one is " << minimum(a, b) << endl;
#else
    cout << " the larger one is " << maximum(a, b) << endl;
#endif

}