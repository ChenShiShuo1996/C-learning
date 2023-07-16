/*
函数的声明
比较函数，比较两个整形数字，返回较大值

函数的声明可以提前告诉编译器的存在，从而将main函数写在最开始；
语法：
返回值类型 函数名(参数类型 参数)；

函数的声明可以有多次，但是定义只能有一次
*/

# include<iostream>
using namespace std;

int max(int a, int b);
int min(int a, int b);

int max(int a,int b){

    return a > b ? a : b;
}

int main(){

    int c = max(10,20);
    int d = min(10,20);

    cout << "最大值为： " << c << endl;
    cout << "最小值为： " << d << endl;
    return 0;
}

int min(int a, int b){

    return a < b ? a : b;
}