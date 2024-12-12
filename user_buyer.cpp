   #include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void user_buyer()
{
    int i,n;
   printf("=====================================================================================\n");
   printf("1.查看商品列表 2.购买商品 3.搜索商品 4.查看历史订单 5.查看商品详细信息 6.返回用户界面\n");
   printf("=====================================================================================\n");
   printf("\n请输入操作：\n");
   scanf("%d",&n);
   printf("\n");
    switch(n)
   {
       case 1:check_goods_list();//查看商品列表
              break;
       case 2:purshchase_goods();//购买商品
              break;
       case 3:search_goods();//搜索商品
              break;
       case 4:view_goods();//查看历史订单
              break;
       case 5:check_product();//查看商品详细信息
              break;
       case 6:user_menu();//返回用户界面
              break;
       default:  printf("输入无效，请重新选择\n\n");
                 user_buyer();
    }
}
