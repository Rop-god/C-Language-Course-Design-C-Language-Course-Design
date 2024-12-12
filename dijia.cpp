#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern struct sf bian;
extern char idd[6];

void glogin()
{
       char ad[15],pwds[15],asd[15],pow[15];
       int flag;
       printf("请输入管理员姓名:");
         scanf("%s",ad);
       printf("\n");
       printf("请输入密码:");
         scanf("%s",pwds);
       printf("\n");
         FILE *fp=fopen("a.txt","r");
         fscanf(fp,"%s %s",asd,pow);
        if(strcmp(ad,asd)==0&&strcmp(pwds,pow)==0)
          {
            printf("\n");
            printf("****** 登录成功！******\n");
            fclose(fp);
             admin_menu();
          }
        else
            {
            printf("****** 登录失败！即将返回主菜单...******\n");
            }
            fclose(fp);

}
