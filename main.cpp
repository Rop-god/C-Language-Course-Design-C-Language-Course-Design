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
int main()
{
    int i,n,a;
    while(1)
{
       printf("=============================================\n");
       printf("1.�û���¼ 2.�û�ע�� 3.����Ա��¼ 4.�˳�����\n");
       printf("=============================================\n");
        printf("\n");
       printf("���������\n");
       scanf("%d",&a);
       printf("\n");
     switch(a)
   {
       case 1:ulogin();//�û���¼
               break;
       case 2:regster();//���û�ע��
               break;
       case 3:glogin();//����Ա��¼
               break;
       case 4:printf("ллʹ�ö��ֽ���ƽ̨����ϵͳ���ټ���\n");
                return 0;
        default:  printf("������Ч��������ѡ��\n");
                  break;
   }


}
    return 0;
}
