//�鿴������Ʒ
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
void check_goods()
{
    char a;
    printf("\n");
    printf("����������Ʒ�嵥���£�\n");
    printf("**********************************************************************************************************\n");
    printf("ID                        ����                      �۸�               �ϼ�ʱ��                   ��Ʒ״̬\n");
    FILE *fp=fopen("c.txt","r");
   for(int i=0;!feof(fp);i++)
       {
        fscanf(fp,"%s %s %lf %s %s %s %s",it[i].id,it[i].name,&it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
        if(strcmp(idd,it[i].seller_id)==0)
        printf("%s     %20s     %20.1lf    %20s    %20s\n",it[i].id,it[i].name,it[i].price,it[i].publish_time,it[i].status);
       }
       fclose(fp);
    printf("**********************************************************************************************************\n");
    printf("\n�������һ��������\n\n");
    user_seller();
}
