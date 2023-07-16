/*
从键盘获取数据
cin >> 变量
*/

# include<iostream>
using namespace std;

int main(){
    int a = 0;
    float f = 3.14f;
    bool flag = false;
    cout << "请给整型变量a赋值:" << endl;
    cin >> a;
    cout << "整型变量为：" << a << endl;

    cout << " 请给浮点数f赋值: "<< endl;
    cin >> f;
    cout <<"浮点数f为: "<< f << endl;
    
    cout << "请给布尔型变量赋值：" << endl; // 赋值需要输入0或以外的数
    cin >> flag;
    cout << "布尔值为：" << flag << endl;



    return 0;

}
