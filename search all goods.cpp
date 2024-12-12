   //搜索商品
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
void search_all_goods()
{
    int i,j,n,m=0,t,p,flag=0;
    char a[101],b[101],ch[2];
    FILE *fp;
    fp=fopen("c.txt","r");
      printf("请输入商品名称：");
      scanf("%s",a);
      printf("\n\n**********************************************************************************************************\n");
      printf("ID                 名称             价格        上架时间            卖家ID              商品状态\n");
       for(int i=0;!feof(fp);i++)
       {
        fscanf(fp,"%s %s %lf %s %s %s %s",it[i].id,it[i].name,&it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
         if(strstr(it[i].name,a)!=NULL)
         {
           flag++;
           printf("%s      %12s         %7.1lf       %10s       %10s       %14s\n",it[i].id,it[i].name,it[i].price,it[i].publish_time,it[i].seller_id,it[i].status);
         }
       }
       fclose(fp);
       printf("**********************************************************************************************************\n\n\n");

        if(flag==0)
         {
         printf("\n****************************************************************\n");
         printf("没有搜到您想要的商品！即将返回初始界面！\n");
         printf("****************************************************************\n\n");
         }
         fclose(fp);
         admin_menu();
}
