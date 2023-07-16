/*
struct 结构体名称 数组名[元素个数] = {{},{},....}
*/
# include<iostream>
using namespace std;
struct Student {
    string name;
    int age;
    int score;
};

int main(){
    struct Student stuArray[3] = {
        {"张三", 28, 99},
        {"李四", 30, 100},
        {"王五", 50, 40} 
    };
    cout << stuArray[1].age << endl;
    cout << (*(stuArray+1)).age << endl;
}
