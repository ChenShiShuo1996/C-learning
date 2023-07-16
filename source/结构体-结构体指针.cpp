/*

*/
# include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};
int main(){
    struct student s = {"张三", 18, 60};
    struct student *p = &s;

    string a = "张三";
    cout << a << endl;
    cout << sizeof(a) << endl;

    cout << "结构体所占内存为：" << sizeof(s) << endl;
    cout << "结构体的name的地址为：";
    cout << &s.name << endl;
    cout << (long)&s.name << endl;
    cout << "结构体中的name占字节为: " << sizeof(s.name) << endl;
    cout << "指向结构体的指针中存放的地址为：" << p << endl;//指向结构体的指针中存放的地址和结构体中第一个元素的地址一样
    cout << "结构体的age的地址为：";
    cout << &s.age << endl;
    cout << (long)&s.age << endl;
    cout << "结构体中的age占字节为: " << sizeof(s.age) << endl;
    cout << "结构体的score的地址为：";
    cout << &s.score << endl;
    cout << (long)&s.score << endl;
    cout << "结构体中的score占字节为: " << sizeof(s.score) << endl;

    //  当一个指针指向了结构体，想通过该指针访问结构体中的元素则需要使用： p->元素名
    cout << p->name << " " << p->age << " " << p->score << endl;
}