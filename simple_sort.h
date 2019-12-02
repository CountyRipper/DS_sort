#ifndef _SIMPLE_SORT_H_
#define _SIMPLE_SORT_H_

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

#endif 