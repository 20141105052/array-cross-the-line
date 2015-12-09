//
//  main.cpp
//  array cross the line
//
//  Created by 20141105052 on 15/12/9.
//  Copyright (c) 2015年 20141105052郭孝宇. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[3],b[3];
    for(int i=0;i<=3;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(int i=0;i<=3;i++)
    {
        printf("%d %d %x %x\n",a[i],b[i],&a[i],&b[i]);
    }
    return 0;
}
