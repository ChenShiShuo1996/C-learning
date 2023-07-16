/*

指针数组：
利用指针访问数组中的每一个元素

*/
# include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    cout << arr[0] << endl;
    //指针访问数组元素
    int *p = arr;//数组名中存放的即为数组的首地址,即 arr 等价于 &arr[0] , 数组名是常量不能修改，某种意义上数组名其实是指向数组首地址的指针
    cout << endl;

    cout << "从此可以看出数组名可以使用操作指针的语法，数组名和指针本质上是相同的" << endl;
    cout << *arr << endl;//从此可以看出数组名可以使用操作指针的语法，数组名和指针本质上是相同的
    cout << arr << endl;
    cout << arr+1 << endl;
    cout << *(arr+1) << endl;
    cout << endl;

    cout << "当指针指向了一个数组，则可以用 指针名[1] 来访问数组的第一个元素，p[0]等价于*p,p[1]等价于*(p+1)" << endl;
    cout << p[0] << endl;//当指针指向了一个数组，则可以用 指针名[1] 来访问数组的第一个元素，p[0]等价于*p,p[1]等价于*(p+1)
    cout << *p << endl;
    cout << p[1] << endl;
    cout << *(p+1) << endl;
    cout << endl;

    //当指针仅仅指向一个元素时，可以用访问数组的语法读取指针指向的值，即指针名[0]，*p 等价于 p[0]
    cout << "当指针仅仅指向一个元素时，可以用访问数组的语法读取指针指向的值，即指针名[0]，*p 等价于 p[0]" << endl;
    int a = 10 ;
    int *p1 = &a;
    cout << *p1 << endl;
    cout << p1[0] << endl;
    cout << endl;

    p++;//int类型的指针++后会往后偏移四个字节
    cout << *p << endl;

    int *p2 = arr;
    for(int i = 0; i < 6; i++){
        cout << *p2 << endl;
        p2++;
    }

    return 0;
}