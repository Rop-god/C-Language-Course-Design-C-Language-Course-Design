#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void check_information()
{
    int i,n,m=0,t,j,p;
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
     //printf("\n");
    for(i=0;i<m;i++)
    {
         if(strcmp(YH[i].id,idd)==0)
         {
             t=i;
             break;
        }
    }
    printf("\n");
    printf("**********************************\n\n");
    printf("�û�����  %s\n\n",YH[t].name);
    printf("��ϵ��ʽ��%s\n\n",YH[t].ci);
    printf("��ַ��    %s\n\n",YH[i].adress);
    printf("Ǯ����%.1lf\n\n",YH[t].bl);
    printf("**********************************\n\n\n");
    fclose(fp);
    personal_information();


}
