/*
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生有成员姓名，考试分数，创建数组存放三名老师，通过函数给每个老师和带的学生赋值
最终打印老师数据以及老师所带学生数据
*/
# include<iostream>
using namespace std;
#include<time.h>

struct student{
    string name;
    int score;
};

struct teacher{
    string name;
    student stuArray[5];
};

void collectInfo(teacher tArray[], int len){
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++){
        tArray[i].name = "Teacher_";
        tArray[i].name += nameSeed[i];

        for (int j = 0; j < 5; j++){
            tArray[i].stuArray[j].name = "Student_";
            tArray[i].stuArray[j].name += nameSeed[j];

            int random = rand()%61 + 40;
            tArray[i].stuArray[j].score = random;
        }
        
    }
}

void printInfo(teacher tArray[], int len){
    for (int i = 0; i < len; i++){
        cout << "老师姓名 " << tArray[i].name << ": "<< endl;
        for (int j = 0; j < 5; j++){
            cout << "\t学生姓名：" << tArray[i].stuArray[j].name << " " << "分数为：" << tArray[i].stuArray[j].score << endl;
        }
        cout << endl;
    }

}

int main(){
    srand((unsigned int)time(NULL));
    teacher tArray[3];
    collectInfo(tArray, sizeof(tArray)/sizeof(tArray[0]));
    printInfo(tArray, sizeof(tArray)/sizeof(tArray[0]));
}