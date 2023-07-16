# include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "输入小猪a的体重：" << endl;
    cin >> a ;
    cout << "输入小猪b的体重：" << endl;
    cin >> b ;
    cout << "输入小猪c的体重：" << endl;
    cin >> c ;

    if (a > b){
        if (a > c)
        {
            cout << "小猪a最重" << endl;
        }
        else
        {
            cout << "小猪c最重" << endl;
        }
    }
    else 
    {
        if (b > c)
        {
            cout << "小猪b最重" << endl;
        }
        else
        {
            cout << "小猪c最重" << endl;
        }
    }
    return 0;
}
