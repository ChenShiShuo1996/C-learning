/*
二维数组的定义方式：
数据类型 数组名[行数][列数]；
数据类型 数组名[行数][列数] = {{数据1，数据2},{数据3，数据4}}；
数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4}
数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4}；
*/
# include<iostream>
using namespace std;

int main(){
    //数据类型 数组名[行数][列数]
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    cout << arr[0][1] << endl;
    cout << arr[1][1] << endl;
    cout << endl;

    //数据类型 数组名[行数][列数] = {{数据1，数据2},{数据3，数据4}}, 推荐
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3 ; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4}
    int arr3[2][3] = {5,5,5,4,4,4};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3 ; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4}；
    int arr4[][3] = {9,9,9,0,0,0};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3 ; j++){
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int arr5[][3] = {1,1,1,0,0,0};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3 ; j++){
            cout << arr5[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    /*二维数组名的用途：
    1.查看占用内存空间大小
    2.查看二维数组首地址
    */
   cout << "二维数组占用的内存空间大小为：" << sizeof(arr5) << endl;
   cout << "二维数组第1行占用的内存空间大小为：" << sizeof(arr5[0]) << endl;
   cout << "二维数组第1个元素占用的内存空间大小为：" << sizeof(arr5[0][0]) << endl;

   cout << "二维数组的行数为：" << sizeof(arr5)/sizeof(arr5[0]) << endl;
   cout << "二维数组的列数为：" << sizeof(arr5[0])/sizeof(arr5[0][0]) << endl;

   cout << "二维数组的首地址（十六进制）为：" << arr5 << endl;

   cout << "二维数组的首地址（十进制）为：" << (long)arr5 << endl;
   cout << "二维数组的第一行数据的首地址（十进制）为：" << (long)arr5[0] << endl;
   cout << "二维数组的第一个元素的首地址（十进制）为：" << (long)&arr5[0][0] << endl;// &为取地址运算符，&var用来返回变量var的地址

   cout << "二维数组的第二行数据的首地址（十进制）为：" << (long)arr5[1] << endl;
   cout << "二维数组的第一行数据的首地址和第二行数据首地址相差" << (long)arr5[1] - (long)arr5[0] << "个字节" <<endl;


    return 0;
}