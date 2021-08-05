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
    cout << "1. Exit Management System" << endl;
    cout << "2. Add employee information" << endl;
    cout << "3. Show employee information" << endl;
    cout << "4. Delete employees" << endl;
    cout << "5. Modify employee information" << endl;
    cout << "6. find employee information" << endl;
    cout << "7. Sort by index" << endl;
    cout << "8. Clear all document" << endl;
    
    
    cout << "****************************************************" << endl;
}
