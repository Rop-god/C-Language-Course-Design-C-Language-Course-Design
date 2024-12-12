//查看发布商品
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
void check_goods()
{
    char a;
    printf("\n");
    printf("您发布的商品清单如下！\n");
    printf("**********************************************************************************************************\n");
    printf("ID                        名称                      价格               上架时间                   商品状态\n");
    FILE *fp=fopen("c.txt","r");
   for(int i=0;!feof(fp);i++)
       {
        fscanf(fp,"%s %s %lf %s %s %s %s",it[i].id,it[i].name,&it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
        if(strcmp(idd,it[i].seller_id)==0)
        printf("%s     %20s     %20.1lf    %20s    %20s\n",it[i].id,it[i].name,it[i].price,it[i].publish_time,it[i].status);
       }
       fclose(fp);
    printf("**********************************************************************************************************\n");
    printf("\n请进行下一步操作！\n\n");
    user_seller();
}
