//
//  practice.cpp
//  First
//
//  Created by gl on 2017/7/26.
//  Copyright © 2017年 gl. All rights reserved.
//

/***********************************************/
/*  知识点：bool类型 命名空间 输入输出              */
/*  题目要求：                                   */
/*     使用两个个函数分别找出整形数组中最大值和最小值   */
/***********************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int[]);
int min(int[]);

//使用模板定义一 个函数getArrayLen,该函数将返回数组array的长度,sizeof计算所占用的内存长度
template <class T>
int getArrayLen(T& array)
{
    return (sizeof(array) / sizeof(array[0]));
}

int main(void)
{
    int s[] = {72,12,43,16,44};
    
    cout << max(s) << endl;
    cout << min(s) << endl;
    
    return 0;
}

int max(int s[])
{
    int temp = 0;
    for (int i = 0; i < getArrayLen(s) ; i++)
    {
        if (s[i] > temp)
        {
            temp = s[i];
        }
    }
    return temp;
}

int min(int s[])
{
    int temp = 0;
    for (int i = 0; i < getArrayLen(s) ; i++)
    {
        if (s[i] < temp || temp == 0)
        {
            temp = s[i];
        }
    }
    return temp;
}
