//�޸���Ʒ
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
void alter_goods()
{
    char a[101],ch[2];
    int i,j,n,m=0,p,flag=0,t;
    double o;
    printf("*********************************************************\n");
    FILE *fp=fopen("c.txt","r");
    while(!feof(fp))
    {
        if(fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status)!=EOF)
        m++;
    }
    fclose(fp);
     if((fp=fopen("c.txt","r"))==NULL)
       {
           printf("******�޶�Ӧ��Ʒ��Ϣ��******\n");
           return;
       }
    printf("\n");
    printf("�������޸���ƷID��");
    scanf("%s",a);
    for(i=0;i<m;i++)
    {
         if(strcmp(a,it[i].id)==0&&strcmp(idd,it[i].seller_id)==0)
         {
             t=i;
             flag=1;
             break;
        }
    }
   if(flag==1)
    {
           printf("�������޸���Ʒ���ԣ�1.�۸� 2.��������");
           scanf("%d",&n);
           if(n==1)
            {
              printf("�������޸ĺ�ļ۸�");
              scanf("%lf",&o);
              it[t].price=o;
            }
           else
           if(n==2)
            {
             printf("�������޸ĺ��������");
             scanf("%s",a);
             strcpy(it[t].description,a);
             }
           else
            {
             printf("\nû�ж�Ӧ����Ʒ���ԣ��޸�ʧ�ܣ�\n");
              printf("**********************************************************\n\n");
             alter_goods();
             }
        printf("��ȷ���޸ĺ����Ʒ��Ϣ��\n\n");
        printf("***********************************************************\n");
        printf("��ƷID��%s\n",it[t].id);
        printf("��Ʒ���ƣ�%s\n",it[t].name);
        printf("��Ʒ�۸�%.1lf\n",it[t].price);
        printf("��Ʒ������%s\n",it[t].description);
        printf("***********************************************************\n");
        printf("ȷ���޸ģ���y/n��");
        scanf("%s",ch);
       if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
        {
           fp=fopen("c.txt","w");
            for(i=0;i<m;i++)
              {
               fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
              }
              printf("�޸ĳɹ���\n");
           printf("*********************************************************\n");
             fclose(fp);
       }
       else
        {
              printf("\n�ѳ�����Ʒ�޸ģ���л����ʹ�ã�\n");
              fclose(fp);
        }

    }
   else
   {
       printf("��ƷID�����ڣ����������룡\n\n");
       fclose(fp);
       user_seller();
   }
   fclose(fp);
   user_seller();
}
