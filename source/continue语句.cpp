/*
continue 语句
再循环语句中，跳过本次循环中余下尚未执行的语句，继续下一次循环
*/

#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 100; i++){

        if (i % 2 == 0){
            continue; //满足条件时会跳过循环后的语句执行下一次循环
        }
        cout << i << endl;
    }
    return 0;
}
