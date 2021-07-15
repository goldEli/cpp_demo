//
//  main.cpp
//  testcpp
//
//  Created by 缪宇 on 2021/7/1.
//

/**
 1. 添加联系人
 2. 显示联系人
 3. 删除联系人
 4. 查找联系人
 5. 修改联系人
 6. 清空联系人
 7. 退出通讯录
 */

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
#include <string>
#define MAX 1000

struct Person
{
     string m_Name;
     // 男1女2
     int m_Sex;
     int m_Age;
     string m_Phone;
     string m_Addr;
};

struct AddressBooks
{
     struct Person persionArray[MAX];
     int m_Size;
};
void printPerson(AddressBooks *abs, int i)
{

     cout << "姓名：" << abs->persionArray[i].m_Name << "\t";
     cout << "性别：" << (abs->persionArray[i].m_Sex == 1 ? "男" : "女") << "\t";
     cout << "年龄：" << abs->persionArray[i].m_Age << "\t";
     cout << "电话：" << abs->persionArray[i].m_Phone << "\t";
     cout << "地址：" << abs->persionArray[i].m_Addr << "\t" << endl;
}

void insertByIndex(AddressBooks *abs, int i)
{
     string name;
     cout << "姓名：";
     cin >> name;
     int sex;
     cout << "男1女2" << endl;
     cout << "性别：";
     while (1)
     {
          if (!cin)
          {
               cin.clear();
               cin.ignore();
          }
          cin >> sex;

          if (sex == 1 || sex == 2)
          {
               break;
          }
          cout << "请输入正确的性别" << endl;
     }

     int age;
     cout << "年龄：";
     cin >> age;
     string phone;
     cout << "电话：";
     cin >> phone;
     string addr;
     cout << "地址：";
     cin >> addr;

     abs->persionArray[i].m_Name = name;
     abs->persionArray[i].m_Sex = sex;
     abs->persionArray[i].m_Age = age;
     abs->persionArray[i].m_Phone = phone;
     abs->persionArray[i].m_Addr = addr;
}

void addPerson(AddressBooks *abs)
{
     insertByIndex(abs, abs->m_Size);
     abs->m_Size++;
}

void showPersons(AddressBooks *abs)
{
     if (abs->m_Size == 0)
     {
          cout << "没有可以展示的联系人" << endl;
          return;
     }
     for (int i = 0; i < abs->m_Size; ++i)
     {
          printPerson(abs, i);
     }
}

int isExist(AddressBooks *abs, string name)
{
     for (int i = 0; i < abs->m_Size; ++i)
     {
          if (name == abs->persionArray[i].m_Name)
          {
               return i;
          }
     }
     return -1;
}

void delPerson(AddressBooks *abs)
{
     string name;
     cout << "请输入删除的联系人：";
     cin >> name;
     int ret = isExist(abs, name);
     if (ret == -1)
     {
          cout << name << "该用户不存在" << endl;
          return;
     }
     for (int i = ret; i < abs->m_Size; ++i)
     {
          abs->persionArray[i] = abs->persionArray[i + 1];
     }
     abs->m_Size--;
     cout << "删除" << name << "成功" << endl;
}

void findPerson(AddressBooks *abs)
{
     string name;
     cout << "请输入查找人的姓名:" << endl;
     cin >> name;
     int ret = isExist(abs, name);
     if (ret == -1)
     {
          cout << "查无此人" << endl;
     }
     else
     {
          printPerson(abs, ret);
     }
}

void modifyPerson(AddressBooks *abs)
{
     string name;
     cout << "请输入修改人的姓名:" << endl;
     cin >> name;
     int ret = isExist(abs, name);
     if (ret == -1)
     {
          cout << "查无此人" << endl;
     }
     else
     {
          insertByIndex(abs, ret);
     }
}

void emptyAddressBooks(AddressBooks *abs) {
     abs->m_Size = 0;
     cout << "通讯录已清空" << endl;
}

int main(int argc, const char *argv[])
{

     AddressBooks abs;

     abs.m_Size = 0;

     while (1)
     {
          int num = 0;
          cout << "*****"
               << "***********"
               << "*******" << endl;
          cout << "*****"
               << "1. 添加联系人"
               << "*****" << endl;
          cout << "*****"
               << "2. 显示联系人"
               << "*****" << endl;
          cout << "*****"
               << "3. 删除联系人"
               << "*****" << endl;
          cout << "*****"
               << "4. 查找联系人"
               << "*****" << endl;
          cout << "*****"
               << "5. 修改联系人"
               << "*****" << endl;
          cout << "*****"
               << "6. 清空联系人"
               << "*****" << endl;
          cout << "*****"
               << "0. 退出通讯录"
               << "*****" << endl;
          cout << "*****"
               << "***********"
               << "*******" << endl;
          cout << "请选择: ";
          cin >> num;
          switch (num)
          {
          case 1: //添加
               addPerson(&abs);
               break;
          case 2: // 显示
               showPersons(&abs);
               break;
          case 3: // 删除
               delPerson(&abs);
               break;
          case 4:
               findPerson(&abs);
               break;
          case 5:
               modifyPerson(&abs);
               break;
          case 6:
               emptyAddressBooks(&abs);
               break;
          case 0:
               cout << "欢迎下次使用" << endl;
               return 0;
          default:
               break;
          }
          system("read -n 1 -s -p \"Press any key to continue...\"");
          system("cls");
          system("clear");
     }

     return 0;
}
