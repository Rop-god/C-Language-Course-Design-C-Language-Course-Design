   #include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void user_buyer()
{
    int i,n;
   printf("=====================================================================================\n");
   printf("1.�鿴��Ʒ�б� 2.������Ʒ 3.������Ʒ 4.�鿴��ʷ���� 5.�鿴��Ʒ��ϸ��Ϣ 6.�����û�����\n");
   printf("=====================================================================================\n");
   printf("\n�����������\n");
   scanf("%d",&n);
   printf("\n");
    switch(n)
   {
       case 1:check_goods_list();//�鿴��Ʒ�б�
              break;
       case 2:purshchase_goods();//������Ʒ
              break;
       case 3:search_goods();//������Ʒ
              break;
       case 4:view_goods();//�鿴��ʷ����
              break;
       case 5:check_product();//�鿴��Ʒ��ϸ��Ϣ
              break;
       case 6:user_menu();//�����û�����
              break;
       default:  printf("������Ч��������ѡ��\n\n");
                 user_buyer();
    }
}
