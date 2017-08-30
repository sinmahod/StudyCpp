//
//  main.cpp
//  Pointer
//
//  Created by gl on 2017/7/28.
//  Copyright © 2017年 gl. All rights reserved.
//

#include <iostream>

/*************/
/*  测试指针   */
/*************/

using namespace std;

int main()
{
    int i = 10;
    int &a = i; //引用（指针地址相同）
    
    cin >> a;
    
    cout << &a << endl;
    cout << &i << endl;
    cout << i <<endl;
    return 0;
}
