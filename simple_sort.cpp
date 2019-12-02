#include "simple_sort.h"

template<class Type>
void Swap(Type &a1,Type &a2){
    Type tmp;
    tmp=a1;a1=a2;a2=tmp;
}

//把小的数往上冒泡
template<class Type>
void BubblSort(Type elem[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(elem[j]<elem[j-1]){
                //如果j<j-1就把j往前排(冒泡)
                Swap(elem[j],elem[j-1]);
            }
        }
    }
}

template<class Type>
void InsertSort(Type elem[],int n){
    for(int i=1;i<n;i++){
        Type e=elem[i];
        for(int j=i-1;j>=0&&e<elem[j];j--){
            //只要是比e小的元素都往后移动,占据elem[i]的位置
            elem[j+1]=elem[j];
        }
        elem[j+1]=e;//因为j最后跳出循环会减1，所以这里+1
    }
}

template<class Type>
void SelectSort(Type elem[],int n){
    for(int i=0;i<n-1;i++){
        int lowindex=i;
        for(int j=i+1;j<n;j++){
            if(elem[i]<elem[j]){
                lowindex=j;
            }
        }
        Swap(elem[i],elem[lowindex]);
    }
}
