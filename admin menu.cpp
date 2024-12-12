#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
using namespace std;
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
struct sf bian;
void admin_menu()
{
    int n,i,j,a;
    printf("======================================================================================\n");
    printf("1.查看所有商品 2.搜索商品 3.查看所有订单 4.查看所有用户 5.删除用户 6.下架商品 7.注销\n");
    printf("======================================================================================\n");
     printf("\n");
     printf("输入操作：\n");
     scanf("%d",&n);
    switch(n)
    {
        case 1:check_all_goods();//查看所有商品
                break;
        case 2:search_all_goods();//搜索商品
               break;
        case 3:check_all_goods_list();//查看所有订单
               break;
        case 4:check_all_users();//查看所有用户
               break;
        case 5:delete_users();//删除用户
               break;
        case 6:off_shelf_goods();//下架商品
               break;
        case 7:return;//注销
               break;
        default:printf("******无效操作，请重新输入！******\n\n");
               admin_menu();
    }

}
