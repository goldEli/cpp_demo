//
//  main.cpp
//  test
//
//  Created by 缪宇 on 2021/7/20.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;



//void test() {
//    ofstream ofs;
//    ofs.open("tttest.txt", ios::out);
//    ofs << "张三" << endl;
//    ofs << "54" << endl;
//    ofs << "男" << endl;
//    ofs.close();
//    cout << "success" << endl;
//};

class Person {
public:
    char m_Name[64];
    int m_age;
};

void test1() {
    ifstream ifs;
    
    ifs.open("./tttest.txt");
    
    if (!ifs.is_open()) {
        cout << "打开失败" << endl;
    }
    
    char buf[1024] = {0};
    while (ifs >> buf) {
        cout << buf << endl;
    }
    
    ifs.close();
    
}

void test2(){
    ofstream ofs;
    ofs.open("b.txt", ios::out | ios::binary);
    Person p = {"lily", 43};
    ofs.write((const char *)&p, sizeof(p));
    
    ofs.close();
}

void test3() {
    ifstream ifs;
    ifs.open("./b.txt");
    
    if (!ifs.is_open()) {
        cout << "读文件失败" << endl;
        return;
    }
    Person p;
   
    ifs.read((char *)&p, sizeof(p));
    cout << p.m_Name << endl;
    cout << p.m_age << endl;
    
    ifs.close();
}

int main() {
    
//    test2();
    test3();
}
