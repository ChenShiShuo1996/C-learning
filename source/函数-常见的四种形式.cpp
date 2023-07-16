/*
1.无参无返
2.有参有返
3.有参无返
4.无参有返
*/
# include<iostream>
using namespace std;

//1.无参无返
void test1(){
    cout << "this is test01" << endl;
}

//2.有参有返
int test2(int a){
    int sum = a + 1;

    return sum;
}

//3.有参无返
void test3(int a){

    cout << a << endl;
}

//4.无参有返
int test4(){
    cout << "this is test4" << endl;

    return 1000;
}

int main(){

    test1();

    int num2 = test2(100);
    cout << num2 << endl;

    test3(100);

    int num4 = test4();
    cout << num4 << endl;

    return 0;
}