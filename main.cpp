#include <iostream>
#include <stdio.h>
#include "MySort.h"
#include "MySort.cpp"
int main(int, char**) {
    int a[100]={0};
    int n;
    std::cin>>n;
    int count=0;
    while(std::cin.peek()!='\n'){
        a[count++]=n;
        std::cin>>n;
    }
    QuikSort(a,0,count);
    for(int i=0;i<count;i++){
        std::cout<<a[i]<<" ";
    }
    return 0;
}
