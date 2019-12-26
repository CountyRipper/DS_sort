#include "sort.h"

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
template<class Type>
void ShellInsert(Type elem[],int n,int incr){
    //进行增量为incr的插入排序
    for(int i=incr;i<n;i++){
        //进行incr-1趟插入排序
        Type e=elem[i];
        int j;
        for(j=i-incr;j>=0&&e<elem[i];j-=incr){
            //将子序列中比e大的都往后移
            elem[j+incr]=elem[j];
        }
        elem[j+incr]=e;
    }
}

template<class Type>
void ShellSort(Type elem[],int n,int d[],int t){
    //给定一个序列ele[]和长度n，以及进行Shell排序的增量序列d[]和长度t，进行希尔排序
    for(int i=0;i<t;i++){
        ShellInsert(elem,n,d[i]);//根据本轮的增量来进行插入排序
    }
}