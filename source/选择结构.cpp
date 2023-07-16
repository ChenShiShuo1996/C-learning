/*
1. 单行if 语句
if (逻辑判断语句)
{
    ...
}
----------------
2.多行if 语句
if (条件语句)
{
    ...
}
else (条件语句)
{
    ...
}
----------------
3.多条件if语句
if (条件1)
{
    ...
}
else if (条件2)
{
    ...
}
else if (条件3)
{
    ...
}
.
.
.
.
----------------
4. 嵌套 if语句
if （条件1）
{
    ... ;
    if (条件1.1)
    {
        ....
    }
}

*/

# include<iostream>
using namespace std;

int main(){
    int score = 0;
    cout << "请输入一个分数： " << endl;
    cin >> score;

    if (score > 600)
    {
        cout << "恭喜你考上了985" << endl;
        if (score > 640 && score <= 660)
        {
            cout << "恭喜你考上了浙大" << endl;
        }
        else if (score > 660)
        {
            cout << "恭喜你考上了清华" << endl;
        }
    }
    else if (500 < score && score <= 600)
    {
        cout << "恭喜你考上了一本" << endl;
    }
    else if (300< score && score <= 500)
    {
        cout << "恭喜你考上了二本" << endl;
    }
    else
    {
        cout << "你考上了三本" << endl;
    }

    return 0;
}
