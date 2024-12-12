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
void off_shelf_goods()
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

         printf("**************************\n");
          printf("请输入下架商品ID：");
        scanf("%s",a);
        printf("您确认要下架该商品吗！\n\n");
        printf("**************************\n");
        for(i=0;i<m;i++)
    {
         if(strcmp(a,it[i].id)==0)
         {
             t=i;
             flag=1;
             break;
         }
    }
                if(flag==1)
                {
                    printf("商品ID：  %s\n",it[t].id);
                    printf("商品名称：%s\n",it[t].name);
                    printf("商品金额：%.1lf\n",it[t].price);
                    printf("商品描述：%s\n",it[t].description);
                    printf("**************************\n\n");
                    printf("请选择（y/n）：");
                    scanf("%s",ch);
                        if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
                            {
                             for(j=t;j<m;j++)
                                {
                                it[j]=it[j+1];
                                }
                                 m--;
                                fp=fopen("c.txt","w");
                                for(i=0;i<m;i++)
                                {
                                    fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
                                }
                                fclose(fp);
                            /*fp=fopen("c.txt","w");
                            for(i=0;i<m;i++)
                                    {
                                    fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
                                    }
                                fclose(fp);*/
                                printf("\n下架成功！\n");
                            }
                            else
                            {
                            printf("\n删除取消！\n");
                            fclose(fp);
                            }
                }
                else
                {
                    printf("该商品不存在！删除失败！");
                    fclose(fp);
                }
                admin_menu();
}
