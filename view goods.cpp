//��Ҳ鿴��ʷ����
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
    printf("\n������ʷ�������£�\n");
    printf("*****************************************************************************************************************\n");
    printf("����ID                    ��ƷID                ���׽��           ����ʱ��           ����ID           ���ID\n");
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
    printf("\n������ʷ����Ϊ�գ�\n\n");
     printf("\n�������һ��������\n\n");
    user_buyer();

}
