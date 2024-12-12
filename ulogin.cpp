#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
//extern char sum[40][10];
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern struct sf bian;
char idd[6];
void ulogin()
{
    int flag=0,p;
    FILE *fp;
   p=print();
   char ad[15],pwds[15],asd[15],pow[15];
       printf("请输入用户名：");
       scanf("%s",&ad);
       printf("\n");
       printf("请输入密码：");
       scanf("%s",&pwds);
       printf("\n");
     fp=fopen("b.txt","r");
      for(int i=0;i<p;i++)
      {
         if(strcmp(ad,YH[i].name)==0&&strcmp(pwds,YH[i].password)==0)
         {
             fclose(fp);
             flag=1;
             strcpy(idd,YH[i].id);
             printf("\n");
         printf("******登陆成功！******\n");
         break;
         }
      }
       if(flag==0)
       printf("******账号或密码错误，请重新登录！******\n\n");
      if(flag==1)
      user_menu();
}
