/*
打印10*10的星图
*/

# include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 10; i++){
        for (int i = 1; i <= 10; i++){
            cout << "* " ; 
        }
        cout << endl;
    }
    return 0;
}