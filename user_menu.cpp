#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void user_menu()
{
    int i,m,p,a;
    printf("===============================================\n");
    printf("1.注销登录 2.我是买家 3.我是卖家 4.个人信息管理\n");
    printf("===============================================\n\n");
    printf("请输入操作：\n");
    scanf("%d",&a);
    printf("\n");
    switch(a)
    {
        case 1:return;
               break;//注销登录
        case 2:user_buyer();//买家登录
               break;
        case 3:user_seller();//卖家登录
               break;
        case 4:personal_information();//个人信息管理
                break;
        default: printf("输入无效，请重新选择\n\n");
                user_menu();
    }

}
