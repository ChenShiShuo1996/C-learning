/*
空指针：指针变量指向内存中编号为0的空间
用途：初始化指针
注意：空指针指向的内存是不可以访问的， 0~255这段内存是系统占用的无法访问

野指针：
指针变量指向了一块非法空间
在程序中要避免创建野指针
*/
# include<iostream>
using namespace std;

int main(){
    //空指针
    int * p = NULL;

    //*p = 100;//运行系统会报错

    int * p1 = (int *)0x1100;//(int *)十六进制数 可以将十六进制数强行转成地址

    return 0;
}