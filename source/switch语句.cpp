/*
switch(表达式){ // 判断的时候只能是整形或者是字符型
    case 结果1: //case的存在使得switch结构很清晰，执行效率高
        执行语句;
        break; // 不加break会一直往下执行
    case 结果2: 
        执行语句;
        break;
    case 结果3: 
        执行语句;
        break;
    ...
    default : 
        执行语句; 
        break; //所有条件均不满足时执行此步
}
*/

# include<iostream>
using namespace std;

int main(){
    cout << "请给电影打分："<< endl;
    int score = 0;
    cin >> score;

    switch(score){
        case 10:
            cout << "您认为是经典电影"<< endl;
            break;
        case 9:
            cout << "您认为是经典电影"<< endl;
            break;
        case 8:
            cout << "您认为是优秀电影"<< endl;
            break;
        case 7:
            cout << "您认为是优秀电影"<< endl;
            break;
        case 6:
            cout << "您认为电影一般"<< endl;
            break;
        case 5:
            cout << "您认为电影一般"<< endl;
            break;
        default:
            cout << "您认为电影很烂"<< endl;
            break;

    }
    return 0;
}