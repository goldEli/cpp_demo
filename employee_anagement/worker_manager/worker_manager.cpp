//
//  worker_manager.cpp
//  employee_anagement
//
//  Created by 缪宇 on 2021/8/3.
//

#include "worker_manager.hpp"
#include <iostream>
using namespace std;

//class WorkerManager {
//public:
//    void WorkerManager() {}
//    void ~WorkerManager() {}
//    void showMenu() {
//        cout << "menu" << endl;
//    }
//};
WorkerManager::WorkerManager() {
    
}
WorkerManager::~WorkerManager() {
    
}

void WorkerManager::showMenu() {
    cout << "*****************************************************" << endl;
    cout << "******Welocme to the Employee Management System******" << endl;
    cout << "*****************************************************" << endl;
    cout << "0. Exit Management System" << endl;
    cout << "1. Add employee information" << endl;
    cout << "2. Show employee information" << endl;
    cout << "3. Delete employees" << endl;
    cout << "4. Modify employee information" << endl;
    cout << "5. find employee information" << endl;
    cout << "6. Sort by index" << endl;
    cout << "7. Clear all document" << endl;
    cout << endl;
    cout << endl;
}

void WorkerManager::exitingSystem(){
    cout << "Welcome for next time!" << endl;
    system("read -n 1 -s -p \"Press any key to continue...\"");
    exit(0);
};
