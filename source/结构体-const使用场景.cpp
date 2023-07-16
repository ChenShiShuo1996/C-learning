/*
用const来防止误操作
*/
# include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};
void printStudent1(student s){
    cout << s.name << " " << s.age << " " << s.score << endl;
}//值传递会占用非常多的内存空间，因为在传递的时候电脑会复制实参的数据传到形参

void printStudent2(const student *p){ //加const后就无法对指针做任何操作，特别是对指针指向的值进行操作

    cout << p->name << p->age << p->score << endl;
}

int main(){
    struct student s = {"张三",20,100};
    
    printStudent2(&s);

    return 0;
}