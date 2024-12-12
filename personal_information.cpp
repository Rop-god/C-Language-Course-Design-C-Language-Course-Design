#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void personal_information()
{
    int a;
   printf("=============================================\n");
   printf("1.返回用户主界面 2.修改信息 3.查看信息 4.充值\n");
   printf("=============================================\n");
   printf("\n请输入操作：\n");
   scanf("%d",&a);
   printf("\n");
    switch(a)
     {
        case 1:user_menu();//返回用户主界面
               break;
        case 2:modify_information();//修改信息
               break;
        case 3:check_information();//查看信息
               break;
        case 4:recharge();//充值
                break;
        default: printf("输入无效，请重新选择\n");
                personal_information();
     }
}
