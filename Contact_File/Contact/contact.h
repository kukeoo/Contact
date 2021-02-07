#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//纪录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
};

//声明函数
//初始化通讯录
void InitContact(struct Contact* ps);
//添加信息
void AddContact(struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定的联系人
void SearchContact(struct Contact* ps);
//更新指定的联系人
void ModifyContact(struct Contact* ps);
//排序通讯录
void SortContact(struct Contact* ps);
//展示通讯录
void ShowContact(struct Contact* ps);
//销毁通讯录
void DestroyContact(struct Contact* ps);
//保存文件
void SaveContact(struct Contact* ps);
//加载文件中的信息
void LoadContact(Contact* ps);
