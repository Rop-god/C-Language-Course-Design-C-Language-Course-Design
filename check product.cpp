//买家查看商品详细信息
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
void check_product()
{
    int i,n,m=0,j,p,flag=0;
    char a[101],ch[2],b[101];
    FILE *fp=fopen("c.txt","r");
    while(!feof(fp))
    {
        if(fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status)!=EOF)
            m++;
    }
    fclose(fp);
    printf("请输入您查看的商品ID：");
    scanf("%s",a);
    for(i=0;i<m;i++)
    {
        if(strcmp(it[i].id,a)==0)
        {
            flag=1;
             printf("***************************************************\n");
             printf("名称：    \t%s\n",it[i].name);
             printf("描述：    \t%s\n",it[i].description);
             printf("上架时间：\t%s\n",it[i].publish_time);
             printf("卖家ID：  \t%s\n",it[i].seller_id);
             printf("商品状态：\t%s\n",it[i].status);
             printf("***************************************************\n\n");
        }
    }
    if(flag==0)
    {
        printf("商品不存在！\n");
    }
    user_buyer();
}
