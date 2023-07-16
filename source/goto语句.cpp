/*

goto 标记；
标记名存在时，执行到goto语句时，会跳转到goto的位置

谨慎使用！
*/
# include<iostream>
using namespace std;

int main(){
    cout << "1.xxxxx" << endl;
    
    goto FLAG;

    cout << "2.xxxxx" << endl;

    cout << "3.xxxxx" << endl;

    FLAG:
    
    cout << "4.xxxxx" << endl;

    cout << "5.xxxxx" << endl;

}