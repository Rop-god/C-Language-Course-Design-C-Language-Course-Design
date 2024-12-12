//查看所有商品
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
void check_all_goods()
{
   int i,j,m=0,n,p=0,t;
   char a[101],ch[2],b[101];
   FILE *fp=fopen("c.txt","r");
   while(!feof(fp))
   {
      if(fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status)!=EOF)
        m++;
   }
    fclose(fp);
    printf("**********************************************************************************************************\n");
    printf("ID                 名称             价格        上架时间            卖家ID              商品状态\n");
    fp=fopen("c.txt","r");
    for(int i=0;!feof(fp);i++)
       {
        fscanf(fp,"%s %s %lf %s %s %s %s",it[i].id,it[i].name,&it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
        printf("%s      %12s         %7.1lf       %10s       %10s       %14s\n",it[i].id,it[i].name,it[i].price,it[i].publish_time,it[i].seller_id,it[i].status);
        p++;
       }
       fclose(fp);
    printf("**********************************************************************************************************\n");
     if(p==0)
    printf("\商品列表为空！\n\n");
    printf("\n请进行下一步操作！\n\n");
    admin_menu();
}
