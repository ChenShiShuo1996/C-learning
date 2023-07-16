/*
do{循环语句}while(循环条件)；

do...while会比while先执行一次循环语句，再判断条件

*/
# include<iostream>
using namespace std;

int main(){
    int num = -1 ;

    do{
        cout<< num << endl;
        num++;
    }
    while(num); //条件为假就会退出循环

    return 0;
}