#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void modify_information()
{
    int i,j,n,m=0,p,t;
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
     if((fp=fopen("b.txt","r"))==NULL)
       {
           printf("******�޶�Ӧ�û���Ϣ��******\n");
           return;
       }
     printf("\n");
    printf("�������޸ĺ�����ԣ�1.�û��� 2.��ϵ��ʽ 3.��ַ����");
    scanf("%d",&n);
     for(i=0;i<m;i++)
    {
         if(strcmp(YH[i].id,idd)==0)
         {
             t=i;
             break;
        }
    }
    if(n==1)
    {
        printf("�������޸ĺ���û�����");
        scanf("%s",a);
        for(i=0;i<m;i++)
       if(strcmp(a,YH[i].name)==0&&i!=t)
         {
         printf("******�û����Ѵ��ڣ�������ע�ᣡ******\n");
         fclose(fp);
         getchar();
         return;
         }
         strcpy(YH[t].id,a);

    }
    if(n==2)
    {
        printf("�������޸ĺ����ϵ��ʽ��");
        scanf("%s",a);
        strcpy(YH[t].ci,a);
    }
    if(n==3)
    {
        printf("�������޸ĺ�ĵ�ַ��");
        scanf("%s",a);
        strcpy(YH[t].adress,a);
    }
     printf("\n��ȷ���޸ĺ���û���Ϣ��\n");
        printf("***********************************************************\n");
        printf("�û�����  %s\n",YH[t].name);
        printf("��ϵ��ʽ��%s\n",YH[t].ci);
        printf("��ַ��    %s\n",YH[t].adress);
        printf("***********************************************************\n");
        printf("ȷ���޸ģ���y/n��");
        scanf("%s",ch);
       if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
        {
           fp=fopen("b.txt","w");
            for(i=0;i<m;i++)
              {
               fprintf(fp,"%s %s %s %s %s %.1lf\n",YH[i].id,YH[i].name,YH[i].password,YH[i].ci,YH[i].adress,YH[i].bl);
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
        personal_information();
}
