#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void publish_goods()
{
    int i,n,m=0,q,j,t=0;
    char a[6],z[2];
    time_t timep;
    struct tm *p;
    char time1[28];
    time (&timep);
    p=gmtime(&timep);
    FILE *fp,*fl;
    fp=fopen("c.txt","r");
     while(!feof(fp))
       {
           if((fscanf(fp,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status))!=EOF)
           {
               m++;
           }
       }
       fclose(fp);
       fl=fopen("f.txt","r");
       fscanf(fl,"%d %d",&bian.num1,&bian.num2);
       fclose(fl);
       strcpy(it[m].id,"M00000");
       if(bian.num2!=0)
       {
           q=log10(bian.num2)+1;
        itoa(bian.num2,a,10);
        for(j=5,i=q-1;j>5-q;i--,j--)
         {
          it[m].id[j]=a[i];
         }
       }
    printf("��������Ʒ���ƣ�");
    scanf("%s",it[m].name);
    printf("\n");
    printf("��������Ʒ��");
    scanf("%lf",&it[m].price);
    printf("\n");
    printf("��������Ʒ������");
    scanf("%s",it[m].description);
    printf("\n\n��ȷ�Ϸ�������Ʒ��Ϣ����\n");
    printf("********************************\n");
    printf("��Ʒ���ƣ�%s\n",it[m].id);
    printf("��Ʒ��%.1lf\n",it[m].price);
    printf("��Ʒ������%s\n",it[m].description);
    printf("********************************\n\n");
    printf("��ȷ��Ҫ��������Ʒ��(y/n) ");
    scanf("%s",z);

    if(strcmp(z,"y")==0||strcmp(z,"Y")==0)
    {
        strcpy(it[m].seller_id,idd);
     sprintf(it[m].publish_time,"%d-%d-%d",1900+p->tm_year,1+p->tm_mon,p->tm_mday);
     strcpy(it[m].status,"������");
     fp=fopen("c.txt","a+");
     if((fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[m].id,it[m].name,it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status))==EOF)
    {
        printf("******����ʧ�ܣ������·�����******\n");
        getchar();
    }
    else
    {
    printf("******������Ʒ�ɹ���******\n\n");
    getchar();
    bian.num2++;
    fl=fopen("f.txt","w");
    fprintf(fl,"%d %d",bian.num1,bian.num2);
    fclose(fl);
    }
    fclose(fp);
     }
     else
     {
         printf("******�ѳ�����Ʒ������Ϣ����л����ʹ�ã�******\n");
     }
     user_seller();
}
