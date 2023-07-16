/* 
1.一维数组
数据类型 数组名[数组长度]；
数据类型 数组名[数组长度]={值1，值2，...};
数据类型 数组名[]={值1，值2，...};

访问数组中的数据： arr[0]（同python）
                    ↑
                    下标
数组要放在一段连续的内存空间中，数组中每个元素都是相同的数据类型。
数组名是常量，不可以进行赋值操作。

*/
# include<iostream>
using namespace std;

int main(){
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int arr3[] = {1,2,3,4,5,6,7,8,9};
    cout << arr[3] << endl;

    int arr4[10];
    for (int i = 0; i < 10 ; i++){
        arr4[i] = i;
    }
    cout << arr4[0] << endl;

    cout << sizeof(arr4) << endl; //统计整个数组占用内存大小
    cout << arr4 << endl; //查看数组首地址(十六进制)，首地址和第一个元素的地址是相同的，元素和元素之间差四个字节
    cout << &arr4[1] << endl;
    cout << (long)arr4 << endl; //十六进制转成10进制
    cout << (long)&arr4[1] << endl;
    cout << sizeof(arr4)/sizeof(arr4[0]) << endl;//数组总占用内存数/数组一个元素占用内存数，可以算出数组的长度
    return 0;
    
}

