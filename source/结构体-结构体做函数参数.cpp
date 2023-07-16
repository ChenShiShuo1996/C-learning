/*
将学生传入到一个参数中，打印学生身上所有信息
*/
# include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};
//值传递
void printStu1(struct student s){

    cout << s.name << s.age << s.score << endl;

}
//地址传递
void printStu2(struct student *p){
    cout << p->age << p->name << p->score;
}

int main(){
    student stu;
    stu.name = "张三";
    stu.age = 20;
    stu.score = 100;

    printStu1(stu);
    printStu2(&stu);

    return 0;
}