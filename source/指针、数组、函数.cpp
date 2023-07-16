/*
封装一个函数，利用冒泡排序，实现整形数组的升序排序

*/
# include<iostream>
using namespace std;
void arrPrint(int *p,int len){
    for (int i = 0; i < len; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *p, int len){
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - i - 1; j++){
            if (p[j] > p[j+1]){
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}


int main(){
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    arrPrint(arr,len);
    bubbleSort(arr,len);
    arrPrint(arr,len);

    return 0;
}