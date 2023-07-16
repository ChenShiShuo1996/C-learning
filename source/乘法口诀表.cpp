/*
打印乘法口诀表
*/

# include<iostream>
using namespace std;

int main(){
    for (int i = 1; i < 10; i++){
        for (int j = 1; j <= i ; j++){
            int prod = i * j;
            cout << j << '*' << i << '=' << prod << " ";
        }
        cout << endl;
    }
    return 0;
}