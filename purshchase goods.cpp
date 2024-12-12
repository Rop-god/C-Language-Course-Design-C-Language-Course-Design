//购买商品
#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void purshchase_goods()
{
    int i,n,m=0,j,q,flag=0,z=0,l=0,t;
    char a[101],b[101];
    double kl=0,o=0;
    time_t timep;
    struct tm *p;
    char time1[28];
    time (&timep);
    p=gmtime(&timep);
     //l=print();//用户数
    FILE *fd,*fc,*fb;
    fc=fopen("c.txt","r");
    while(!feof(fc))
    {
        if((fscanf(fc,"%s %s %lf %s %s %s %s",it[m].id,it[m].name,&it[m].price,it[m].description,it[m].seller_id,it[m].publish_time,it[m].status))!=EOF)
           m++;
    }
    fclose(fc);

     fb=fopen("b.txt","r");
       while(!feof(fb))
       {
           if((fscanf(fb,"%s %s %s %s %s %lf",YH[l].id,YH[l].name,YH[l].password,YH[l].ci,YH[l].adress,&YH[l].bl))!=EOF)
           {
               l++;
           }
       }
       fclose(fb);

    if((fc=fopen("c.txt","r"))==NULL)
       {
           printf("******无对应商品信息！******\n");
           return;
       }
     printf("请输入商品ID：");
     scanf("%s",a);
     printf("\n");
     for(i=0;i<m;i++)
    {
         if(strcmp(a,it[i].id)==0&&strcmp(it[i].status,"销售中")==0)
         {
             t=i;
             o=it[i].price;
             flag=1;
             break;
         }
    }


    if(flag==1)
    {
               fb=fopen("b.txt","r");
               for(i=0;i<l;i++)
               {
                    if(strcmp(YH[i].id,idd)==0&&o>YH[i].bl)
                    {

                        printf("\n******余额不足，请充值！*****\n");
                        printf("余额：%.1lf\n\n",YH[i].bl);
                         fclose(fb);
                        user_menu();
                        break;
                    }
                   if(strcmp(YH[i].id,idd)==0&&o<=YH[i].bl)
                    {
                        YH[i].bl=YH[i].bl-o;
                        kl=YH[i].bl;
                        strcpy(it[t].status,"已售出");
                        fc=fopen("c.txt","w");
                        for(j=0;j<m;j++)
                         {
                         fprintf(fc,"%s %s %.1lf %s %s %s %s\n",it[j].id,it[j].name,it[j].price,it[j].description,it[j].seller_id,it[j].publish_time,it[j].status);
                         }
                          fclose(fc);
                          fb=fopen("b.txt","r");
                          if(strcmp(it[t].seller_id,YH[j].id)==0)
                          {
                              YH[j].bl=YH[j].bl+o;
                          }
                          fclose(fb);
                          fb=fopen("b.txt","w");
                           for(i=0;i<l;i++)
                              {
                               fprintf(fb,"%s %s %s %s %s %.1lf\n",YH[i].id,YH[i].name,YH[i].password,YH[i].ci,YH[i].adress,YH[i].bl);
                              }
                              fclose(fb);

                                fd=fopen("d.txt","r");
                                while(!feof(fd))
                                    {
                                    if((fscanf(fd,"%s %s %lf %s %s %s",order[z].id,order[z].cid,&order[z].at,order[z].timeo,order[z].seid,order[z].byid))!=EOF)
                                        {
                                            z++;
                                        }
                                    }
                                    fclose(fd);
                                    strcpy(order[z].id,"T00000");
                                    if(z!=0)
                                    {
                                        q=log10(z)+1;
                                        itoa(z,b,10);
                                        for(j=5,i=q-1;j>5-q;i--,j--)
                                            {
                                                order[z].id[j]=b[i];
                                            }
                                    }

                                    sprintf(order[z].timeo,"%d-%d-%d",1900+p->tm_year,1+p->tm_mon,p->tm_mday);
                                    printf("***********************\n");
                                    printf("交易提醒！\n");
                                    printf("交易时间：%s\n",order[z].timeo);
                                    printf("交易金额：%.1lf\n",o);
                                    strcpy(order[z].cid,it[t].id);
                                    order[z].at=o;
                                    strcpy(order[z].seid,it[t].seller_id);
                                    strcpy(order[z].byid,idd);
                                    fd=fopen("d.txt","a+");
                                    if((fprintf(fd,"%s %s %.1lf %s %s %s\n",order[z].id,order[z].cid,order[z].at,order[z].timeo,order[z].seid,order[z].byid))==EOF)
                                    {
                                    printf("******交易失败！******\n");
                                    getchar();
                                    }
                                    else
                                    {
                                    printf("交易状态：交易成功\n");
                                    printf("余额：%.1lf\n",kl);
                                    printf("***********************\n\n");
                                    }
                                    break;
                    }
               }
               fclose(fb);
    }
    else
    {
        printf("\n商品ID错误，请重新输入！\n");
        fclose(fd);
        purshchase_goods();
    }
    fclose(fd);
    user_buyer();
}
