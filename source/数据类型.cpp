/*不同数据类型所占内存空间不同
整形 4个字节
1. 短整型 -32768~32767
    short num = 10
2. 整形 -2^31 ~ 2^31-1
    int num = 10
3. 长整形 -2^31 ~ 2^31-1
    long num = 10
4. 长长整形 -2^63~2^63-1
    long long num = 10

sizeof 关键词
    计算数据类型或变量占用的内存大小（单位·字节）
    sizeof(数据类型/变量)

实型（浮点型）
1. 单精度float 4字节 7位有效数字
    float f1 = 3.14f
2. 双精度double 8 字节 15——16位有效数字
    double d1 = 3.14
C++默认只显示6位有效数字,且默认为双精度，单精度需要在数字后加f

科学计数法
float f2 = 3e2 3*10^2
float f3 = 3e-2 3*0.1^2

字符型
char ch = 'a';
要用单引号字符括起来且只能有一个字符，不要用双引号，
只占一个字节，因为字符在内存中是以ASCll码的形式储存

字符串型
1.C语言型
char 变量名[] = "字符串值"
变量名后要有中括号，要用双引号
2.C++型
# include<string>
string 变量名 = "字符串值"
用之前要包含头文件<string>

布尔型
bool 变量名 = true/false
true 和 false
只占用一个字节

*/
# include<iostream>
# include<string>
using namespace std;

int main(){

    char ch = 'b';
    float f2 = 3.1415926f;
    double d3 = 2e-2;
    char conName[] = "China";
    string conName2 = "China";
    bool flag_t = true;
    bool flag_f = false;
    string a = "张三";
    

    cout << ch << endl;
    cout << sizeof(ch) << endl;
    cout << "ASCll码为" << (int)ch << endl;
    cout << f2 << endl;
    cout << d3 << endl;
    cout << "C风格为" << conName << endl;
    cout << "c++风格为" << conName2 << endl;
    cout << flag_t << endl;
    cout << flag_f << endl;
    cout << "布尔值所占内存空间为" << sizeof(flag_t) << endl;
    cout << "中文字符串所占内存为：";
    cout << sizeof(a) << endl;
    return 0;
}