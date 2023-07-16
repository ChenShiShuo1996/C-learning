/*
输出1~100的特殊数字
特殊数字，7的倍数，个位有7，十位有7
*/
# include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 100 ; i++){
        if (i%7 == 0){
            cout << "敲桌子" << endl;
        }
        else if (i%10 == 7){
            cout << "敲桌子" << endl;
        }
        else if (i/10 == 7){
            cout << "敲桌子" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    return 0;
}