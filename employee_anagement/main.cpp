//
//  main.cpp
//  employee_anagement
//
//  Created by 缪宇 on 2021/8/3.
//

#include <iostream>
#include "worker_manager.hpp"
using namespace std;

/**
 worker category: worker manager boss
 
 worker attributes: number, name, department number
 worker behavior: get job description, get job title
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    WorkerManager wm;
    
    int choice = 0;
    
    while (true) {
        wm.showMenu();
        cin >> choice;
        switch (choice) {
            case 0: // exit
                wm.exitingSystem();
                return 0;
            case 1: // add
                break;
            case 2: // show
                break;
            case 3: // delete
                break;
            case 4: // modify
                break;
            case 5: // find
                break;
            case 6: // sort
                break;
            case 7: // clear
                break;
            default:
                system("clear");
                break;
        }
//        system("read -n 1 -s -p \"Press any key to continue...\"");
//        system("cls");
        
    }
    
    return 0;
}
