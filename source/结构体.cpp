/*
结构体是用户自定义的数据类型，允许用户储存各种不同的数据类型

struct 结构体名 {结构体成员列表}；
*/
# include<iostream>
using namespace std;
# include<string> 

//定义方式：struct 结构体名 {数据类型1 数据类型名1；数据类型2 数据类型名2....}（不可省略）

struct Student {
    string name;
    int age;
    int score;
}S3;//结构体变量创建方式3. 定义之后马上创建

int main(){
    //结构体变量创建方式1.
    struct Student S1;//struct关键字可以不写
    Student S4;

    S1.name = "张三";
    S1.age = 18;
    S1.score = 100;
    cout << S1.name << endl;

    //结构体变量创建方式2.
    struct Student S2 = {"张三", 20, 30};
    cout << S2.name << endl;

    S3.name = "王五";
    S3.age = 46;
    S3.score = 90;
}