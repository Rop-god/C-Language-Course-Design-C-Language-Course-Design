#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
//using namespace std;
struct sa YH[40];
struct sc it[300];
struct sd order[2050];
extern char sum[40][10];
extern struct sf bian;
extern char idd[6];
void regster()
{
       char a[5];
     printf("******欢迎来到注册界面！******\n");
    // printf("%d\n",num1);
      int i,m=0,j,p,t=0;
      FILE *fp,*fl;
      fp=fopen("b.txt","r");
       while(!feof(fp))
       {
           if((fscanf(fp,"%s %s %s %s %s %lf",YH[m].id,YH[m].name,YH[m].password,YH[m].ci,YH[m].adress,&YH[m].bl))!=EOF)
           {
               m++;
           }
       }
       //t=m;
       fclose(fp);
       fl=fopen("f.txt","r");
      fscanf(fl,"%d %d",&bian.num1,&bian.num2);
      fclose(fl);
       strcpy(YH[m].id,"U00000");
       if(bian.num1!=0)
       {
           p=log10(bian.num1)+1;
           itoa(bian.num1,a,10);
           for(j=5,i=p-1;j>5-p;i--,j--)
           {

              YH[m].id[j]=a[i];
           }
       }

           /*if(strcmp(YH[m].id,YH[m-1].id)==0)
           {
               t++;
               p=log10(t)+1;
               itoa(t,a,10);
                for(j=5,i=p-1;j>5-p;i--,j--)
                 {
                  YH[m].id[j]=a[i];
                 }
           }*/

       if((fp=fopen("b.txt","a+"))=NULL)
       {
           printf("******注册失败，请重新注册！******\n");
           return;
       }
    printf("请输入用户名：\n");
    scanf("%s",YH[m].name);
      for(i=0;i<m;i++)
       if(strcmp(YH[m].name,YH[i].name)==0)
    {
        printf("******用户名已存在，请重新注册！******\n");
        fclose(fp);
        getchar();
        return;
      }
        printf("请输入密码：\n");
    scanf("%s",YH[m].password);
    printf("请输入联系方式：\n");
    scanf("%s",YH[m].ci);
    printf("请输入地址：\n");
    scanf("%s",YH[m].adress);
    YH[m].bl=0;
    fp=fopen("b.txt","a+");
    if((fprintf(fp,"%s %s %s %s %s %.1lf\n",YH[m].id,YH[m].name,YH[m].password,YH[m].ci,YH[m].adress,YH[m].bl))==EOF)
    {
        printf("******注册失败，请重新注册！******\n");
        getchar();
    }
    else
    {
    printf("******注册成功！******\n\n");
    bian.num1++;

    fl=fopen("f.txt","w");
    fprintf(fl,"%d %d",bian.num1,bian.num2);
    fclose(fl);
    }
    fclose(fp);
}

