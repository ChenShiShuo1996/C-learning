/*
比较相邻的元素，如果第一个比第二个大，就交换它们
对每一对相邻元素做同样工作，执行完毕后找到第一个最大值
重复以上步骤，每次比较次数减1，直到不需要比较
作用：把一个数组的元素从小到大排序

*/
# include<iostream>
using namespace std;

int main(){
    int arr[]={5,2,4,3,8,0,7,1,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = size;

    for (int i = 0; i < size ; i++){
        for (int j = 0; j < size-i-1 ; j++){
            int before = arr[j];
            int after = arr[j+1];
            if (before > after){
                arr[j] = after;
                arr[j+1] = before;
            }
            else{
                continue;
            }
        }
    }

    /* while (size > 1){
        int j = 0;
        while (num > 1){
            int before = arr[j];
            int after = arr[j+1];
           
            if (before > after){
                arr[j] = after;
                arr[j+1] = before;
                j++;
                num--;
            }
            else{
                j++;
                num--;
            }  
        }
        size--;
    } */

for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    cout << arr[i] << endl;
}

return 0;
}