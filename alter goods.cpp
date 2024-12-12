//修改商品
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
void alter_goods()
{
    char a[101],ch[2];
    int i,j,n,m=0,p,flag=0,t;
    double o;
    printf("*********************************************************\n");
    FILE *fp=fopen("c.txt","r");
    while(!feof(fp))
    {
        if(fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status)!=EOF)
        m++;
    }
    fclose(fp);
     if((fp=fopen("c.txt","r"))==NULL)
       {
           printf("******无对应商品信息！******\n");
           return;
       }
    printf("\n");
    printf("请输入修改商品ID：");
    scanf("%s",a);
    for(i=0;i<m;i++)
    {
         if(strcmp(a,it[i].id)==0&&strcmp(idd,it[i].seller_id)==0)
         {
             t=i;
             flag=1;
             break;
        }
    }
   if(flag==1)
    {
           printf("请输入修改商品属性（1.价格 2.描述）：");
           scanf("%d",&n);
           if(n==1)
            {
              printf("请输入修改后的价格：");
              scanf("%lf",&o);
              it[t].price=o;
            }
           else
           if(n==2)
            {
             printf("请输入修改后的描述：");
             scanf("%s",a);
             strcpy(it[t].description,a);
             }
           else
            {
             printf("\n没有对应的商品属性，修改失败！\n");
              printf("**********************************************************\n\n");
             alter_goods();
             }
        printf("请确认修改后的商品信息！\n\n");
        printf("***********************************************************\n");
        printf("商品ID：%s\n",it[t].id);
        printf("商品名称：%s\n",it[t].name);
        printf("商品价格：%.1lf\n",it[t].price);
        printf("商品描述：%s\n",it[t].description);
        printf("***********************************************************\n");
        printf("确认修改？（y/n）");
        scanf("%s",ch);
       if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
        {
           fp=fopen("c.txt","w");
            for(i=0;i<m;i++)
              {
               fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
              }
              printf("修改成功！\n");
           printf("*********************************************************\n");
             fclose(fp);
       }
       else
        {
              printf("\n已撤销商品修改，感谢您的使用！\n");
              fclose(fp);
        }

    }
   else
   {
       printf("商品ID不存在，请重新输入！\n\n");
       fclose(fp);
       user_seller();
   }
   fclose(fp);
   user_seller();
}
