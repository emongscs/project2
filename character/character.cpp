// Copyright Epic Games, Inc. All Rights Reserved.

#include <iostream>
#include <string>
using namespace std;

class character {
private:
    static character* instance;
    string name;
    int level = 1;
    int health = 0;
    int maxhealth = 200;
    int attak = 30;
    int gold = 0;
    int experience = 0;

public:
    character(string name)
    {
        this->name = name;
        cout << "ĳ������ �г����� " << name << "�Դϴ�." << endl;
    }

    // ���� �޼���: ������ ĳ���� �ν��Ͻ��� ��ȯ
    static character* getInstance() {

    }

    void displayStatus()
    {
        cout << "<status>" << endl;
        cout << "name : " << name << endl;
        cout << "level : " << level << endl;
        cout << "health : " << health << endl;
        cout << "attak : " << attak << endl;
        cout << "gold : " << gold << endl;
        cout << "experience : " << experience << endl;
    }
    void levelup()
    {
        level++;
    }
    void useitem(int index)
    {

    }
};


int main()
{

    string name;
    cout << "ĳ������ �г����� �Է����ּ��� : ";
    cin >> name;
    cout << "ĳ������ �̸��� :" << name << "�Դϴ�." << endl;

    return 0;

}
