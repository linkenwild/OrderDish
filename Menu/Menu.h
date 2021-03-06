#ifndef _MENU_H_
#define _MENU_H_

#include "..\\Glb_putstring\Glb_putstring.h"
#include "..\\List\List.h"
#include "..\\File\File.h"

struct Menu_t
{
	char num[8];// 菜编号
	char name[20];// 菜名
	int price;// 菜价格

};

/************************************************************************
* 函数名称：void Menu_print(pList pt)
* 功能描述：
           菜谱链表打印函数
* 参数说明：
*       pList pt    菜谱的结点
* 返回值：
*        无
*************************************************************************/
void Menu_print(pList pt);

/************************************************************************
* 函数名称：void *Menu_add(void *data)
* 功能描述：
           菜谱链表结点增加函数
* 参数说明：
*       void *data    菜谱最后一个结点的数据指针
* 返回值：
*        返回新增的数据指针
*************************************************************************/
void *Menu_add(void *data);

/************************************************************************
* 函数名称：int Menu_del(pList pL)
* 功能描述：
           菜谱链表结点删除函数
* 参数说明：
*       pList pL    菜谱结点
* 返回值：
*        返回成功与否标志
*************************************************************************/
int Menu_del(pList pL);

/************************************************************************
* 函数名称：int Menu_updata(pList pL)
* 功能描述：
           菜谱链表结点更新函数
* 参数说明：
*       pList pL    菜谱结点
* 返回值：
*        返回成功与否标志
*************************************************************************/
int Menu_updata(pList pL);

/************************************************************************
* 函数名称：void Menu_search(pList head);
* 功能描述：
           菜谱查询函数
* 参数说明：
*       pList head    菜谱的头指针
* 返回值：
*        无
*************************************************************************/
void Menu_search(pList head);

#endif


