#include <iostream>
#include <bits/stdc++.h>
#include "saiwen.h"
#include "list.h"
extern struct sa YH[40];
extern struct sc it[300];
extern struct sd order[2050];
extern char idd[6];
extern struct sf bian;
void personal_information()
{
    int a;
   printf("=============================================\n");
   printf("1.�����û������� 2.�޸���Ϣ 3.�鿴��Ϣ 4.��ֵ\n");
   printf("=============================================\n");
   printf("\n�����������\n");
   scanf("%d",&a);
   printf("\n");
    switch(a)
     {
        case 1:user_menu();//�����û�������
               break;
        case 2:modify_information();//�޸���Ϣ
               break;
        case 3:check_information();//�鿴��Ϣ
               break;
        case 4:recharge();//��ֵ
                break;
        default: printf("������Ч��������ѡ��\n");
                personal_information();
     }
}
