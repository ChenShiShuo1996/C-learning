/*
表达式1?表达式2:表达式3

1为真执行2输出2
1为假执行3输出3

C++中三目运算符返回的是变量，可以继续赋值
*/
# include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c = 30;

    c = (a > b ? a : b);
    cout << c << endl;

    (a > b ? a : b) = 100; //对返回的变量继续赋值
    cout << a << endl;
    cout << b << endl;

    a > b ? a=10000 : b=10000; //三目运算符返回的是一个变量
    cout << a << endl;
    cout << b << endl;

    return 0;

}