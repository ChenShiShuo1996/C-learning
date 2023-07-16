# include"swap.h"//要包括一下自己编写的头文件

int main(){

    swap(10,20);

    return 0;

}
void swap(int a, int b){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}