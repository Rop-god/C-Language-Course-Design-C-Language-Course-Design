//�¼���Ʒ
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
void off_goods()
{
    char a[101],ch[2];
    int i,n,m=0,flag=0,t,j;
    FILE *fp=fopen("c.txt","r");

     while(!feof(fp))
    {
        if(fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status)!=EOF)
        m++;
    }
    fclose(fp);


     if((fp=fopen("c.txt","r"))=NULL)
         {
           printf("******����Ʒ��Ϣ��******\n");
           return;
         }


        printf("�������¼���ƷID��");
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
          if(strcmp(it[t].status,"���¼�")==0)
          {
              printf("\n******��Ʒ���¼ܣ�������ѡ��*******\n\n");
              fclose(fp);
              // off_goods();
              user_seller();
          }
          if(strcmp(it[t].status,"���۳�")==0)
          {
              printf("\n******��Ʒ���۳���������ѡ��*******\n\n");
              fclose(fp);
              // off_goods();
              user_seller();
          }
          printf("\n");
          printf("**********************************************************************************************************************\n");
          printf("��ƷID        ��Ʒ����        �۸�             ��Ʒ����              ����ID          ����ʱ��       ��Ʒ״̬\n");
          printf("%s\t      %s\t      %.1lf\t         %s\t              %s\t           %s\t                %s\t\n",it[t].id,it[t].name,it[t].price,it[t].description,it[t].seller_id,it[t].publish_time,it[t].status);
          printf("**********************************************************************************************************************\n");
          printf("\nȷ���¼ܣ���y/n��");
          scanf("%s",ch);
         if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
             {
                 strcpy(it[t].status,"���¼�");
                 fp=fopen("c.txt","w");
                 for(i=0;i<m;i++)
                  {
                  fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
                  }
                 fclose(fp);
                 printf("\n******�ѳɹ��¼ܣ�******\n");
             }
            else
             {
                 printf("\n�ѳ�������Ʒ���¼ܣ���л����ʹ�ã�\n\n");
                 fclose(fp);
             }

      }
      else
      {
         printf("��ƷID�����ڣ����������룡\n");
       fclose(fp);
       off_goods();
      }
      fclose(fp);
      user_seller();
}
