# include<iostream>
using namespace std;
//系统时间头文件的包含90
//# include<ctime>

int main()
{
    // 添加随机数种子，利用当前系统时间生成随机数，防止每次随机数一致
    srand((unsigned int)time(NULL));
    //1.系统生成随机技术
    int num = rand()%100 + 1;//生成一个0~99之间的随机数(伪随机数)

    //2.玩家猜数字
    int num_p = 0;
    int times = 5;
    //3.判断玩家数字和随机数的大小
    while (1){
        if (times > 0){
            cout << "请输入一个数字" <<endl;
            cin >> num_p;
            if (num_p > num){
                cout << "猜测过大" << endl;
                times--;
            }
            else if (num > num_p){
                cout << "猜测过小" << endl;
                times--;
            }
            else{
                cout << "恭喜你猜对了" << endl;
                break;
            }
        }
        else
        {
            cout << "您已猜满五次，游戏结束！";
            break;
        }
        
        
    }
    //
    return 0;
}