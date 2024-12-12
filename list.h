#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <string>
using namespace std;
//用户信息
struct sa{
    char id[10];//用户ID
    char name[15];//用户名
    char password[25];//密码
    char ci[25];//联系方式
    char adress[200];//地址
    double bl;//钱包余额
};
//商品信息
struct sc{
    char id[7]; // 商品ID
    char name[15]; // 商品名称
    double price; // 商品价格
    char description[101]; // 商品描述信息
    char seller_id[7]; // 卖家ID
    char publish_time[50]; // 上架时间
    char status[11]; // 商品状态
};
struct sd{
char id[10];//订单ID
char cid[10];//商品ID
double at;//交易金额
char timeo[15];//交易时间
char seid[10];//卖家ID
char byid[10];//买家ID
};
struct sf
{
    int num1;
    int num2;
};

//extern struct sa YH;
//extern struct sc item;
//extern int num1;
//extern int num2;
#endif // LIST_H_INCLUDED
