/*

*/
# include<iostream>
using namespace std;

void swap01(int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap02(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;//这一步是用p2指针指向的内存中的值来替换p1指向的内存中的值
    *p2 = temp;
}
int main(){
    //值传递
    int a = 10;
    int b = 20;
    swap01(a,b);
    cout << a << endl;
    cout << b << endl;
    //地址传递,可以修饰实参
    swap02(&a,&b);
    cout << a << endl;
    cout << b << endl;
}
