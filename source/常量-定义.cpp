# include<iostream>
using namespace std;

// 1. 在文件开头定义宏常量（相当于全局）# define 宏常量 常量值
// 2. const修饰的变量 const 数据类型 常量名 = 常量值
// 常量一旦声明不可更改

#define Day 7

int main(){
    const int months = 12;
    cout << "一年有" << months << "个月" << endl;
    cout << "一周共有" << Day << "天" << endl ;
    return 0;
}