//������Ʒ
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
void search_goods()
{
   int i,n=0,m=0,t,j,flag=0;
   char a[101],ch[2],b[101];
   FILE *fp;
   /*while(!feof(fp))
       {
           if((fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status))!=EOF)
           {
               m++;
           }
       }
       fclose(fp);
        if((fp=fopen("c.txt","r"))==NULL)
       {
           printf("******�޶�Ӧ��Ʒ��Ϣ��******\n");
           return;
       }*/
      fp=fopen("c.txt","r");
      printf("��������Ʒ���ƣ�");
      scanf("%s",a);
      printf("\n************************************************************\n");
      printf("ID                        ����                      �۸�\n");
      for(i=0;!feof(fp);i++)
      {
           fscanf(fp,"%s %s %lf %s %s %s %s",it[i].id,it[i].name,&it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
          //printf("%s \n",it[i].description);
           if(strstr(it[i].name,a)!=NULL&&strcmp(it[i].status,"������")==0)
          {
            flag++;
            printf("%s     %20s     %20.1lf\n",it[i].id,it[i].name,it[i].price);
          }

      }
            printf("*************************************************************\n\n");

        if(flag==0)
         {
         printf("\n****************************************************************\n");
         printf("û���ѵ�����Ҫ����Ʒ���������س�ʼ���棡\n");
         printf("****************************************************************\n\n");
         }
         fclose(fp);
         user_buyer();
}
