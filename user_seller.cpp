#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void user_seller()
{
    int i,n,a;
   printf("===================================================================================\n");
   printf("1.发布商品 2.查看发布商品 3.修改商品信息 4.下架商品 5.查看历史订单 6.返回用户主界面\n");
   printf("===================================================================================\n");
   printf("\n请输入操作：\n");
   scanf("%d",&a);
   printf("\n");
   switch(a)
   {
       case 1:publish_goods();//发布商品
              break;
       case 2:check_goods();//查看发布商品
              break;
       case 3:alter_goods();//修改商品信息
              break;
       case 4:off_goods();//下架商品
              break;
       case 5:check_order();//查看历史订单
              break;
       case 6:user_menu();//返回用户界面
              break;
       default:  printf("输入无效，请重新选择\n");
                 user_seller();
    }
}
