/*
for(起始表达式；条件表达式；末尾循环体){
    循环语句；
}
起始表达式用来创建初始值，每次循环结束之后会执行一次末尾循环体语句，然后进行条件表达式的判断是否开启下一次循环
*/
# include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10 ; i++)
    {
        cout << i <<endl;
    }

    return 0; 
}