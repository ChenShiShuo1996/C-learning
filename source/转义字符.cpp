/*
\a 警报
\n 换行
\t 水平制表,可以整齐输出数据,
   相当于可以被其前的数据替代的八个空格,如果超出或等于八个则会重新变成八个空格
\\ 代表一个反斜线字符
*/
# include<iostream>
using namespace std;

int main(){

    cout << "hello world\n";
    cout << "aaaaaaaa\taaaaaa\n";
    cout << "aaa\taaaaa\n";
    cout << "aaaaa\taa\n";

    return 0;

}