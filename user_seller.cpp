#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void user_seller()
{
    int i,n,a;
   printf("===================================================================================\n");
   printf("1.������Ʒ 2.�鿴������Ʒ 3.�޸���Ʒ��Ϣ 4.�¼���Ʒ 5.�鿴��ʷ���� 6.�����û�������\n");
   printf("===================================================================================\n");
   printf("\n�����������\n");
   scanf("%d",&a);
   printf("\n");
   switch(a)
   {
       case 1:publish_goods();//������Ʒ
              break;
       case 2:check_goods();//�鿴������Ʒ
              break;
       case 3:alter_goods();//�޸���Ʒ��Ϣ
              break;
       case 4:off_goods();//�¼���Ʒ
              break;
       case 5:check_order();//�鿴��ʷ����
              break;
       case 6:user_menu();//�����û�����
              break;
       default:  printf("������Ч��������ѡ��\n");
                 user_seller();
    }
}
