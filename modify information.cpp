#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void modify_information()
{
    int i,j,n,m=0,p,t;
    char a[101],ch[2],b[101];
    FILE *fp=fopen("b.txt","r");
    while(!feof(fp))
    {
        if((fscanf(fp,"%s %s %s %s %s %lf",YH[m].id,YH[m].name,YH[m].password,YH[m].ci,YH[m].adress,&YH[m].bl))!=EOF)
           {
               m++;
           }
    }
    fclose(fp);
     if((fp=fopen("b.txt","r"))==NULL)
       {
           printf("******无对应用户信息！******\n");
           return;
       }
     printf("\n");
    printf("请输入修改后的属性（1.用户名 2.联系方式 3.地址）：");
    scanf("%d",&n);
     for(i=0;i<m;i++)
    {
         if(strcmp(YH[i].id,idd)==0)
         {
             t=i;
             break;
        }
    }
    if(n==1)
    {
        printf("请输入修改后的用户名：");
        scanf("%s",a);
        for(i=0;i<m;i++)
       if(strcmp(a,YH[i].name)==0&&i!=t)
         {
         printf("******用户名已存在，请重新注册！******\n");
         fclose(fp);
         getchar();
         return;
         }
         strcpy(YH[t].id,a);

    }
    if(n==2)
    {
        printf("请输入修改后的联系方式：");
        scanf("%s",a);
        strcpy(YH[t].ci,a);
    }
    if(n==3)
    {
        printf("请输入修改后的地址：");
        scanf("%s",a);
        strcpy(YH[t].adress,a);
    }
     printf("\n请确认修改后的用户信息！\n");
        printf("***********************************************************\n");
        printf("用户名：  %s\n",YH[t].name);
        printf("联系方式：%s\n",YH[t].ci);
        printf("地址：    %s\n",YH[t].adress);
        printf("***********************************************************\n");
        printf("确认修改？（y/n）");
        scanf("%s",ch);
       if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
        {
           fp=fopen("b.txt","w");
            for(i=0;i<m;i++)
              {
               fprintf(fp,"%s %s %s %s %s %.1lf\n",YH[i].id,YH[i].name,YH[i].password,YH[i].ci,YH[i].adress,YH[i].bl);
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
        personal_information();
}
