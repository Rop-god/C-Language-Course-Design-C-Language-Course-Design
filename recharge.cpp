#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void recharge()
{
    int i,j,n,m=0,t,p;
    char a[101],ch[2],b[101];
    double we;
    FILE *fp=fopen("b.txt","r");
     while(!feof(fp))
    {
            if((fscanf(fp,"%s %s %s %s %s %lf",YH[m].id,YH[m].name,YH[m].password,YH[m].ci,YH[m].adress,&YH[m].bl))!=EOF)
             {
               m++;
             }

    }
    fclose(fp);
    if((fp=fopen("b.txt","r"))==NULL)
       {
           printf("******�޶�Ӧ�û���Ϣ��******\n");
           return;
       }
       printf("�������ֵ��Ŀ��");
       scanf("%lf",&we);
        for(i=0;i<m;i++)
      {
         if(strcmp(YH[i].id,idd)==0)
          {
             t=i;
             break;
          }
      }
       printf("\n��ȷ�ϳ�ֵ��Ŀ��\n");
        printf("***********************************************************\n");
        printf("��ֵ��Ŀ��%.1lf\n",we);
        printf("***********************************************************\n");
        printf("ȷ�ϳ�ֵ����y/n��");
        scanf("%s",ch);
       if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
        {
           YH[t].bl=YH[t].bl+we;
           fp=fopen("b.txt","w");
            for(i=0;i<m;i++)
              {
               fprintf(fp,"%s %s %s %s %s %.1lf\n",YH[i].id,YH[i].name,YH[i].password,YH[i].ci,YH[i].adress,YH[i].bl);
              }
           printf("*********************************************************\n");
             fclose(fp);
             printf("��ֵ�ɹ���\n\n");
             printf("��ǰ��%.1lf\n\n\n",YH[t].bl);
        }
        else
        {
              printf("\n�ѳ�����ֵ����л����ʹ�ã�\n");
              fclose(fp);
        }
       personal_information();
}
