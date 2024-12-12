//下架商品
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
void off_goods()
{
    char a[101],ch[2];
    int i,n,m=0,flag=0,t,j;
    FILE *fp=fopen("c.txt","r");

     while(!feof(fp))
    {
        if(fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status)!=EOF)
        m++;
    }
    fclose(fp);


     if((fp=fopen("c.txt","r"))=NULL)
         {
           printf("******无商品信息！******\n");
           return;
         }


        printf("请输入下架商品ID：");
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
          if(strcmp(it[t].status,"已下架")==0)
          {
              printf("\n******商品已下架！请重新选择！*******\n\n");
              fclose(fp);
              // off_goods();
              user_seller();
          }
          if(strcmp(it[t].status,"已售出")==0)
          {
              printf("\n******商品已售出！请重新选择！*******\n\n");
              fclose(fp);
              // off_goods();
              user_seller();
          }
          printf("\n");
          printf("**********************************************************************************************************************\n");
          printf("商品ID        商品名称        价格             商品描述              卖家ID          发布时间       商品状态\n");
          printf("%s\t      %s\t      %.1lf\t         %s\t              %s\t           %s\t                %s\t\n",it[t].id,it[t].name,it[t].price,it[t].description,it[t].seller_id,it[t].publish_time,it[t].status);
          printf("**********************************************************************************************************************\n");
          printf("\n确认下架？（y/n）");
          scanf("%s",ch);
         if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
             {
                 strcpy(it[t].status,"已下架");
                 fp=fopen("c.txt","w");
                 for(i=0;i<m;i++)
                  {
                  fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
                  }
                 fclose(fp);
                 printf("\n******已成功下架！******\n");
             }
            else
             {
                 printf("\n已撤销该商品的下架，感谢您的使用！\n\n");
                 fclose(fp);
             }

      }
      else
      {
         printf("商品ID不存在，请重新输入！\n");
       fclose(fp);
       off_goods();
      }
      fclose(fp);
      user_seller();
}
