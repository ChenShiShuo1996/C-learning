/*
const修饰指针的三种情况：
1.const修饰指针： 常量指针  const int * p = &a
指针指向可以修改（可以改变其指向的内存），但是指针指向的值不能更改（无法修改指向的内存中的值）

2.const修饰常量： 指针常量
int * const p = &a;
指向不可以改，指向的值可以改

3.const既修饰指针又修饰常量
const int * const p = &a;
指向和值都不可以改

记法：*p是值，p表示指针指向，const修饰*p，所以不能改变值，如果const只修饰p，则不能改变指向

*/
# include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    const int * p1 = &a;
    cout << p1 << endl;
    cout << *p1 << endl;
    p1 = &b;// 限定*时可以修改指向，不能修改值
    cout << p1 << endl;
    cout << *p1 << endl;

    int * const p2 = &b;
    cout << p2 << endl;
    cout << *p2 << endl;
    *p2 = 30;//限定p时可以修改值,不能修改指向
    cout << p2 << endl;
    cout << *p2 << endl;

    const int * const p = &a;

    return 0;
}