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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//�����Ϣ
void AddContact(struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ������ϵ��
void SearchContact(struct Contact* ps);
//����ָ������ϵ��
void ModifyContact(struct Contact* ps);
//����ͨѶ¼
void SortContact(struct Contact* ps);
//չʾͨѶ¼
void ShowContact(struct Contact* ps);
//����ͨѶ¼
void DestroyContact(struct Contact* ps);
//�����ļ�
void SaveContact(struct Contact* ps);
//�����ļ��е���Ϣ
void LoadContact(Contact* ps);
