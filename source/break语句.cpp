/*
break 语句用法
跳出选择或者循环语句

1.终止switch结构的case
2.出现在循环语句，跳出当前循环
3.嵌套结构中，跳出内层语句

*/

# include<iostream>
using namespace std;

int main(){
    cout << "请选择副本难度" <<endl;
    cout << "1.普通" <<endl;
    cout << "2.困难" <<endl;
    cout << "3.残酷" <<endl;
    
    int select = 0;
    cin >> select;
    
    switch(select){
        case 1:
            cout << "您选择的是普通难度" << endl;
            break;
        case 2:
            cout << "您选择的是困难难度" << endl;
            break;
        case 3:
            cout << "您选择的是残酷难度" << endl;
            break;
    }
    return 0;
}
