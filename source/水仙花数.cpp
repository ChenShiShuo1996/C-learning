/*
水仙花数是指一个3位数，每个位上的数字的3次幂之和等于它本身
e.g. 1^3+5^3+3^3=153
*/
# include<iostream>
using namespace std;

int main(){
    int num = 100;
    do{
        int unit = num % 10; //取个位
        int decade = (num / 10)%10; //取十位
        int hundreds = (num / 100); //取百位
        int out = unit*unit*unit + decade*decade*decade +hundreds*hundreds*hundreds;

        if (out == num){
            cout << num << endl;
            num++;
        }
        else{
           num++; 
        }  
    }
    while(num<1000);

    return 0;
}