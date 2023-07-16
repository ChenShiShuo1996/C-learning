/*
作用：让代码更加清晰
4个步骤：
1.创建后缀名为.h的头文件；
2.创建后缀名为.cpp的源文件
3.在头文件中写函数声明
4.在源文件中写函数定义
*/

# include"swap.h"
int main(){
    
    swap(10,20);

    return 0;
}
//定义一个交换数字的函数
void swap(int a, int b){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
