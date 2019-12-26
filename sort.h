#ifndef _SORT_H_
#define _SORT_H_

template<class Type>
void Swap(Type &a1,Type &s2);
//冒泡排序
template<class Type>
void BubbleSort(Type elem[],int n);
//插入排序
template<class Type>
void InsertSort(Type elem[],int n);
//选择排序
template<class Type>
void SelectSort(Type elem[],int n);

//Shell希尔排序
template<class Type>
void ShellSort(Type elem[],int n);

//template<class Type>
//void ShellInsert()
#endif 