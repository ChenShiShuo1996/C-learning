/*
指针的作用：
内存编号是从0开始记录的，一般用16进制数字表示
可以用指针变量来保存地址

指针所占的内存空间
指针也是数据类型，占多少内存空间？
在32位操作系统中，占4个字节
在64位中，占8

*/
# include<iostream>
using namespace std;

int main(){
    //1.定义指针
    int a = 10;
    //定义指针的语法： 数据类型 * 指针变量名：
    // 用取址符让指针记录a变量的地址
    int * p = &a;
    cout << &a << endl;
    cout << p << endl;
    cout << "指针p所占内存为: " << sizeof(p) << endl;
    cout << "整形指针*所占内存为: " << sizeof(int *) << endl;
    cout << "单精度浮点型指针*所占内存为: " << sizeof(float *) << endl;
    cout << "双精度浮点型指针*所占内存为: " << sizeof(double *) << endl;
    cout << "字符型指针*所占内存为: " << sizeof(char *) << endl;

    //2.使用指针
    //可以通过解引用的方式来找到指针: 指针前加*用来访问存放在指针中的内存中存储的数字,也可以说*p类似于变量名
    *p = 1000;
    cout << a << endl;
    cout << *p << endl;

    //3.修改指针指向
    //修改指向时不需要使用定义的语法，直接将地址赋值给指针变量名即可
    int b = 20;
    int c = 30;
    int *p1 = &b;
    cout << *p1 << endl;
    p1 = &c;
    cout << *p1 << endl;

    return 0;
}