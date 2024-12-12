//买家查看历史订单
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
void view_goods()
{
    int i,j,n,m=0,p;
    char a[101],ch[2],b[101];
    printf("\n您的历史订单如下！\n");
    printf("*****************************************************************************************************************\n");
    printf("订单ID                    商品ID                交易金额           交易时间           卖家ID           买家ID\n");
    FILE *fp=fopen("d.txt","r");
     for(int i=0;!feof(fp);i++)
       {
           fscanf(fp,"%s %s %lf %s %s %s ",order[i].id,order[i].cid,&order[i].at,order[i].timeo,order[i].seid,order[i].byid);
           if(strcmp(idd,order[i].byid)==0)
            {
            printf("%s      %20s  %20.1lf   %20s   %13s   %14s\n",order[i].id,order[i].cid,order[i].at,order[i].timeo,order[i].seid,order[i].byid);
            m++;
            }
       }
       fclose(fp);
    printf("*****************************************************************************************************************\n");
    if(m==0)
    printf("\n您的历史订单为空！\n\n");
     printf("\n请进行下一步操作！\n\n");
    user_buyer();

}
