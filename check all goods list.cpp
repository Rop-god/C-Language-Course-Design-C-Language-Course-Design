//�鿴���ж���
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
void check_all_goods_list()
{
    int i,j,n,m=0,t,p;
    char a[101],ch[2],b[101];
     printf("************************************************************************************************************\n");
    printf("ID                      ��ƷID               ���׽��           ����ʱ��           ���ID           ����ID\n");
    FILE *fp=fopen("d.txt","r");
     for(int i=0;!feof(fp);i++)
       {
           fscanf(fp,"%s %s %lf %s %s %s ",order[i].id,order[i].cid,&order[i].at,order[i].timeo,order[i].seid,order[i].byid);
            printf("%s      %18s   %18.1lf  %20s   %13s   %14s\n",order[i].id,order[i].cid,order[i].at,order[i].timeo,order[i].byid,order[i].seid);
            m++;
       }
       fclose(fp);
    printf("************************************************************************************************************\n");
    if(m==0)
    printf("\n����Ϊ�գ�\n\n");
     printf("\n�������һ��������\n\n");
     admin_menu();
}
