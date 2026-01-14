#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;

struct Player {
    int id;
    string login;
    string password;

    void printInfo() const {
        cout << "ID: " << id << endl;
        cout << "Логин: " << login << endl;
        cout << "Пароль: " << password << endl;
    }
};

#endif
