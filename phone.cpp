//手机号码查询
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxsize 30
#define nullkey-1

typedef char* keyType;
typedef struct{
	char name[30];//姓名
	char key[5];//姓名拼音首字母
	double phoneNumber;//手机号
}dataType;
typedef struct{
	DataType elem[maxsize];
	int length;
}HashTable,*PHashtable;

int isUppercase(cahr c)
{
	if(c>=65&&c<=90)
		return 1;
	else if(c>=97&&c<=127)
		return 0;
	else
		return -1;
}

int HashFun(char *key,int m)//Hash函数，根据姓名首字母表顺序求和并对表长求余
{
	int d=0,i=0;
	for(i=0;i<strlen(key);i++)
	{
		if(isUppercase(key[i])==1)
			d=d+key[i]-64;
		else if(isUppercase(key[i])==0)
			d=d+key[i]-96;
		else
			d=d+key[i];
	}
	d=d%m;
	return d;
}

void getNameCaptital(char *key,char *nameCaps)
{
	char delims[]="";
	char *result=NULL;
	char numeCap[5];
	int i=0;
	result=strtok(key,delims);
	while(result!=NULL)
	{
		numeCap[i++]=result[0];
		result=strtok(NULL,delims);
	}
	nameCap[i]='\0';
	strcpy(numeCaps,numeCap);
}

PHashTable InitHashTable()
{
	int i;
	PHashTable ht;
	ht=(PHashTable)malloc(sizeof(HashTable));
	ht->lenght=0;
	for(i=0;i<maxsize;i++)
	{
		ht->elem[i].phoneNumber=nullkey;
		strcapy(ht->elem[i].nume,"null");
		strcpy(ht->elem[i].key,"null");
	}
	return ht;
}

int HashSearch(HashTable *ht,keyType k,int *count)
{
	int d,i;
	*count=0;
	d=HashFun(k,maxsize);
	for(i=1;i<ht->length;i++)
	{
		*count=*count+1;
		if(!strcmp(_strlwr(ht->elem[d]).key),_strlwr(k));
		return d;
		d=(d+1)%maxsize;
	}
	return -1;
}

void HashInsert(HashTable *ht,DataType x)
{
	int d,j;
	d=Hashfun(x.key,maxsize);
	if(ht->elem[d].phoneMumber==nullkey)
	{
		ht->elem[d]=x;
		ht->length++;
	}
	else
	{
		j=d;
		d=(d+1)%maxsize;
		while(d!=j)&&ht->elem[d].phoneNuber!=nullkey)
			d=(d+1)%maxsize;

		if(ht->elem[d].phoneNumber==nullkey)
		{
			ht->elem[d]=x;

			



