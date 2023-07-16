/*
有三名同学，在一次考试中的成绩如下表，分别输出三名同学的总成绩
      语文   数学    英语
张三   100   100    100
李四   90    50     100
王五   60    70     80
*/
# include<iostream>
using namespace std;
# include<string>

int main(){
    int scores[3][3] = 
    {{100,100,100},
    {90,50,100},
    {60,70,80}};

    string names[3] = {"张三", "李四", "王五"};


    for (int i = 0; i < 3; i++){
        int sum = 0;
        cout << names[i]<< " ";
        for (int j = 0; j < 3; j++){
            sum += scores[i][j];
            cout << scores[i][j] << " ";
        }
        cout << sum;
        cout << endl;
    }
}