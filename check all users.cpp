//�鿴�����û�
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
void check_all_users()
{
    int i,j,n,m=0,t,p=0;
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
       fp=fopen("b.txt","r");
       printf("**********************************************************************************************************\n");
       printf("�û�ID           �û���              ��ϵ��ʽ                   ��ַ               Ǯ�����\n");
       for(i=0;i<m;i++)
       {
             //fscanf(fp,"%s %s %s %s %s %lf",YH[m].id,YH[m].name,YH[m].password,YH[m].ci,YH[m].adress,&YH[m].bl);
             printf("%s      %10s         %14s           %18s      %10.1lf\n",YH[i].id,YH[i].name,YH[i].ci,YH[i].adress,YH[i].bl);
             p++;
       }
        fclose(fp);
    printf("************************************************************************************************************\n");
     if(p==0)
    printf("\nע���û�����Ϊ�գ�\n\n");
     printf("\n�������һ��������\n\n");
     admin_menu();
}
