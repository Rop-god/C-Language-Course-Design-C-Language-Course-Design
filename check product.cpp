//��Ҳ鿴��Ʒ��ϸ��Ϣ
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
    printf("���������鿴����ƷID��");
    scanf("%s",a);
    for(i=0;i<m;i++)
    {
        if(strcmp(it[i].id,a)==0)
        {
            flag=1;
             printf("***************************************************\n");
             printf("���ƣ�    \t%s\n",it[i].name);
             printf("������    \t%s\n",it[i].description);
             printf("�ϼ�ʱ�䣺\t%s\n",it[i].publish_time);
             printf("����ID��  \t%s\n",it[i].seller_id);
             printf("��Ʒ״̬��\t%s\n",it[i].status);
             printf("***************************************************\n\n");
        }
    }
    if(flag==0)
    {
        printf("��Ʒ�����ڣ�\n");
    }
    user_buyer();
}
