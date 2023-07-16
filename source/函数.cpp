/*
函数的定义
1.返回值类型
2.函数名
3.参数列表
4.函数体语句
5.return 表达式

创建函数的语法：
返回值类型 函数名（参数列表）
{
    函数体语句；

    return 表达式；
}

函数的调用：
函数名（参数）

*/
//实现传入两个整形数据，计算并返回其相加的结果。
# include<iostream>
using namespace std;

int numAdd (int num1, int num2)//形式参数
{
    int sum = num1 + num2;

    return sum;
}

int main()
{
    int a = 10; //实际参数
    int b = 20;
    int c = numAdd(a,b);

    cout << c << endl;

    return 0;
}
