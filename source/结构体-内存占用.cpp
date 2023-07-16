# include<iostream>
using namespace std;
# include<string>


struct test{
    char a;
    double b;
    char c;
};
int main(){
    test t = {'1',2.13,'2'};
    cout << sizeof(t.a) << endl;
    cout << sizeof(t.b) << endl;
    cout << sizeof(t.c) << endl;
    cout << sizeof(t) << endl;
}
/* 每个元素放进结构体空间中都会从结构体的首地址开始按自己的大小寻找空间，比如a占一个字节，那么a会从结构体首地址以一个字节为单位寻找离首地址最近的空间放进去
，这里就是从首地址开始占一个字节的空间，但是double占8个字节，因此它会从首地址开始按8个字节为一个单位查找离首地址最近的可用内存（对齐数为8），而第一个八字节
单位的第一个字节被a占用只剩下7个，于是它会存放在第二个8字节单位中，然后接下来的c就会以一个字节为单位存放在b的后面,但是结构体的总内存数必须为最大对齐数的整数倍，
如果单纯相加只有17个内存（a的一个字节,a到b的七个字节，c的一个字节）而最靠近17的最大内存的整数倍为3*8=24,因此会补充7个字节到结构体空间。
{a*** **** bbbb bbbb c*** ****}
*/