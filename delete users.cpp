//ɾ���û�
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
void delete_users()
{
    int i,j,n,m=0,p,t,flag=0,l=0,z;
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

     if((fp=fopen("b.txt","r"))=NULL)
         {
           printf("******���û���Ϣ��******\n");
           return;
         }

        printf("������Ҫɾ���û�ID��");
        scanf("%s",a);
      for(i=0;i<m;i++)
     {
         if(strcmp(a,YH[i].id)==0)
         {
             t=i;
             flag=1;
             break;
         }
     }

     if(flag==1)
     {
         printf("\n");
         printf("ȷ��Ҫɾ�����û���\n\n");
         printf("******************\n");
         printf("�û�ID��  %s\n",YH[t].id);
         printf("�û�����  %s\n",YH[t].name);
         printf("��ϵ��ʽ��%s\n",YH[t].ci);
         printf("******************\n\n");
         printf("��ѡ��y/n��");
         scanf("%s",ch);
         if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
             {
                 for(j=t;j<m;j++)
                 {
                     YH[j]=YH[j+1];
                 }
                    m--;
                 fclose(fp);

                 fp=fopen("b.txt","w");
                 for(i=0;i<m;i++)
                  {
                  fprintf(fp,"%s %s %s %s %s %.1lf\n",YH[i].id,YH[i].name,YH[i].password,YH[i].ci,YH[i].adress,YH[i].bl);
                  }
                 fclose(fp);
                 printf("ɾ���ɹ�\n\n");

                 fp=fopen("c.txt","r");
                 while(!feof(fp))
                 {
                 if(fscanf(fp,"%s %s %lf %s %s %s %s",it[l].id,it[l].name,&it[l].price,it[l].description,it[l].seller_id,it[l].publish_time,it[l].status)!=EOF)
                        l++;
                 }
                fclose(fp);

                        for(i=0;i<l;i++)
                        {
                                if(strcmp(YH[t].id,it[i].seller_id)==0)
                                {
                                  z=i;
                                  strcpy(it[z].status,"���¼�");
                                  break;
                                }
                        }


                            fp=fopen("c.txt","w");
                            for(i=0;i<l;i++)
                            {
                                fprintf(fp,"%s %s %.1lf %s %s %s %s\n",it[i].id,it[i].name,it[i].price,it[i].description,it[i].seller_id,it[i].publish_time,it[i].status);
                            }
                             fclose(fp);

             }
            else
             {
                 printf("ɾ��ʧ�ܣ�\n\n");
                 fclose(fp);
             }


     }
     else
     {
         printf("�û�ID�����ڣ�\n\n");
       fclose(fp);
     }
      //fclose(fp);
      admin_menu();
}
