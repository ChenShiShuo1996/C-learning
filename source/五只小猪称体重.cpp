/*
一个数组中记录了五只小猪体重，找出并打印最重的小猪

请声明一个5个元素的数组，并且将元素逆置
*/
# include<iostream>
using namespace std;

int main(){
    int arr[] = {300,350,200,400,250};
    int max = 0;
    for (int i = 0; i < 5; i++){
        if (max > arr[i]){
            continue;
        }
        else {
            max = arr[i];
        }
    }

    cout << "最终的小猪体重是：" << max << endl;

int trans[] = {1,2,3,4,5};
int start = 0 ;
int end = (sizeof(trans)/sizeof(trans[0]))-1;//末尾元素的下标位置
int size = end;

/* for (;;){
    if (start < end){
        int stock = trans[start];
        trans[start] = trans[end];
        trans[end] = stock;
        start++;
        end--;
    }
    else{
        break;
    }

} */
while (start < end){
    int stock = trans[start];
    trans[start] = trans[end];
    trans[end] = stock;
    start++;
    end--;
}
for (int i = 0; i <= size; i++){
    cout << trans[i] << endl;
}


return 0;
}