//
//  main.cpp
//  First
//
//  Created by gl on 2017/7/14.
//  Copyright © 2017年 gl. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iterator>

//作用域如果不加下面的cout需要使用std::cout与std::endl
using namespace std;

void result(int);  //C++的程序使用变量的基本规则是：先声明后使用，所以使用函数必须先做原型声明，声明在所有函数之外就是全局型声明

//使用模板定义一 个函数getArrayLen,该函数将返回数组array的长度
template <class T>
int getArrayLen(T& array){
    return (sizeof(array) / sizeof(array[0]));
}

int main()
{
    // int a(100), b(50);
    // printf("Hello World\r\n");
    // puts("Hello World!");
    // std::cout << "Hello World!" << a << b << std::endl;
    
    // std::cin >> a >> b;
    // std::cout << a + b << "\n";
    // int s = result();   //没有返回值会返回1875932000
    // std::cout << s;
    
    
    // double *p;  //声明一个double类型的指针
    // p = new double[3];  //分配三个double类型的存储空间，new的对象使用完了要回收内存。
    // for (int i = 0 ; i < 3 ; i++){
    //     cin >> p[i];
    // }
    // for (int i = 0 ; i < 3 ; i++){
    //     cout << &p[i] << endl;  //输出指针地址
    // }
    
    // for (int i = 0 ; i < 3 ; i++){
    //     cout << p[i] << endl;
    // }
    
    // delete p;   //释放内存
    
    // for (int i = 0 ; i < 3 ; i++){
    //     cout << p[i] << endl;
    // }
    
    // int i = 100;
    
    // int &a = i;  //引用，指向相同指针，如果去掉&则等于复制，不同指针。
    
    // a = 200;
    
    // cout << i << endl;
    // cout << a << endl;
    // cout << &i << endl;
    // cout << &a << endl;
    // result(i);
    
    //return 0;
    
    // int x = 5;
    // int * const p = &x;  //指针引用，可以改变指针的值，但是不能改变指针的地址。
    
    // cout << p << endl;
    
    // *p = 10;
    
    // cout << x << endl;
    
    // const int * p = &x;
    
    // cout << p << endl;
    
    // cout << x << endl;
    
    int s[] = {1,2,3,4,5},x[5];
    
    reverse(s,s + 5);

    
    for ( int i = 0 ; i < getArrayLen(s) ; i++ ){
        cout << s[i] << endl;
    }
    
    copy(s,s + 5,x);
    copy(s,s + 5,ostream_iterator<int>(cout," "));
    cout << endl;
}

void result(int i){
    cout << &i << endl;
}

