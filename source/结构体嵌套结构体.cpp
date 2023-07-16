/*
一个结构体可以包含另一个结构体
*/
# include<iostream>
using namespace std;
# include<string>

struct student{ //要先定义要包括的结构体
    string name;
    int age;
    int score;
};
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;//包括另一个结构体时，要对其进行创建
};

int main(){
    teacher t;
    t.id = 1001;
    t.name = "张三";
    t.age = 40;
    t.stu.name = "李四";
    t.stu.age = 20;
    t.stu.score = 104;

    cout << t.name << " " << t.id << " " << t.age << " "
    << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;

} 