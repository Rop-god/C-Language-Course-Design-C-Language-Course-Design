#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
using namespace std;
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
int main()
{
    int i,n,a;
    while(1)
{
       printf("=============================================\n");
       printf("1.用户登录 2.用户注册 3.管理员登录 4.退出程序\n");
       printf("=============================================\n");
        printf("\n");
       printf("输入操作：\n");
       scanf("%d",&a);
       printf("\n");
     switch(a)
   {
       case 1:ulogin();//用户登录
               break;
       case 2:regster();//新用户注册
               break;
       case 3:glogin();//管理员登录
               break;
       case 4:printf("谢谢使用二手交易平台管理系统，再见！\n");
                return 0;
        default:  printf("输入无效，请重新选择\n");
                  break;
   }


}
    return 0;
}
