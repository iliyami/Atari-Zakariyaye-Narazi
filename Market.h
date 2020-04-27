#ifndef Market_H
#define Market_H
#include <iostream>
#include "Atar.h"

using namespace std;

class Market
{
public:
    /*Option that Amo Atar can buy!*/
    bool Security;
    bool Herbs_Level2;
    bool Herbs_Level3;
    bool GUI;
    bool Increasing_Server_Capacity;
    bool Lab;
    /*Setters for set values*/
    void set_Security();
    void set_Herbs_Level2();
    void set_Herbs_Level3();
    void set_GUI();
    void set_Increasing_Server_Capacity();
    void set_Lab();
    /*Return True if each option in market was purchased*/
    bool Check_Security();
    bool Check_Herbs_Level2();
    bool Check_Herbs_Level3();
    bool Check_GUI();
    bool Check_Increasing_Server_Capacity();
    bool Check_Lab();
    //Constructor Just for set values
    Market();
    /*Buy System*/
    void Buy(Atar &);
    void Buy_Herbs_Level1(Atar &);
    void Buy_Herbs_Level2(Atar &);
};

void Market::set_Security()
{
    Security = false;
}
void Market::set_Herbs_Level2()
{
    Herbs_Level2 = false;
}
void Market::set_Herbs_Level3()
{
    Herbs_Level3 = false;
}
void Market::set_GUI()
{
    GUI = false;
}
void Market::set_Increasing_Server_Capacity()
{
    Increasing_Server_Capacity = false;
}
void Market::set_Lab()
{
    Lab = false;
}

bool Market::Check_Security()
{
    if (Security == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Herbs_Level2()
{
    if (Herbs_Level2 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Herbs_Level3()
{
    if (Herbs_Level3 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_GUI()
{
    if (GUI == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Increasing_Server_Capacity()
{
    if (Increasing_Server_Capacity == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Lab()
{
    if (Lab == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Market::Market()
{
    set_Security();
    set_Herbs_Level2();
    set_Herbs_Level3();
    set_GUI();
    set_Increasing_Server_Capacity();
    set_Lab();
}

void Market::Buy_Herbs_Level1(Atar &amo_atar)
{
     cout << "\t\t\tBuying Goods (Level 2)\n" << endl;
    cout << "Which Herbs do you need?" << endl;
    cout << "(1) Narenj  ×1  Cost:8,000" << endl;
    cout << "(2) Khar maryam  ×3  Cost:12,500" << endl;
    cout << "(3) Shahtare  ×1  Cost:12,500" << endl;
    cout << "(4) Ocaliptos  ×1  Cost:14,700" << endl;
    cout << "(5) Khakshir  ×1  Cost:5,000" << endl;
    cout << "(6) Marze  ×5  Cost:8,000" << endl;
    cout << "(7) Darchin  ×1  Cost:10,000" << endl;
    cout << "(8) Avishan ×5  Cost:10,000" << endl;
    cout << "(9) Jo dosar ×1  Cost:20,000" << endl;
    cout << "(10) Sir ×1  Cost:8,000" << endl;
    cout << "(11) Karchak ×1  Cost:15,000" << endl;
    cout << "(12) Gon ×1  Cost:12,000" << endl;
    cout << "press 0 to back to the Market Menu if you are not moshtari here!" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        if (amo_atar.getMoney() >= 8000)
        {
            cout << "You Got the Narenj" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 2:
        if (amo_atar.getMoney() >= 12500)
        {
            cout << "You Got the Khar maryam" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 3:
        if (amo_atar.getMoney() >= 12500)
        {
            cout << "You Got the Shahtare" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 4:
        if (amo_atar.getMoney() >= 14700)
        {
            cout << "You Got the Ocaliptos" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 5:
        if (amo_atar.getMoney() >= 5000)
        {
            cout << "You Got the Khakshir" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 6:
        if (amo_atar.getMoney() >= 8000)
        {
            cout << "You Got the Marze" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 7:
        if (amo_atar.getMoney() >= 10000)
        {
            cout << "You Got the Darchin" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 8:
        if (amo_atar.getMoney() >= 10000)
        {
            cout << "You Got the Avishan" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 9:
        if (amo_atar.getMoney() >= 20000)
        {
            cout << "You Got the Jo dosar" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 10:
        if (amo_atar.getMoney() >= 8000)
        {
            cout << "You Got the Sir" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 11:
        if (amo_atar.getMoney() >= 15000)
        {
            cout << "You Got the Karchak" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 12:
        if (amo_atar.getMoney() >= 12000)
        {
            cout << "You Got the Gon" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
    case 0:
        break;
    default:
        break;
    }
}

void Market::Buy_Herbs_Level2(Atar &amo_atar)
{
    cout << "\t\t\tBuying Goods (Level 2)\n" << endl;
    cout << "Which Herbs do you need?" << endl;
    cout << "(1) Babone  ×5  Cost:10,000" << endl;
    cout << "(2) Barg Aloevera  ×3  Cost:15,500" << endl;
    cout << "(3) Asal  ×1  Cost:35,500" << endl;
    cout << "(4) Ocaliptos  ×1  Cost:14,700" << endl;
    cout << "(5) Jinsing  ×1  Cost:25,000" << endl;
    cout << "(6) Gol Gavzabon  ×5  Cost:8,000" << endl;
    cout << "(7) Ostokhoddos  ×5  Cost:15,000" << endl;
    cout << "(8) Zafaran Alaye Daraje yek! ×1  Cost:95,000" << endl;
    cout << "press 0 to back to the Market Menu if you are not moshtari here!" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        if (amo_atar.getMoney() >= 10000)
        {
            cout << "You Got the Babone" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 2:
        if (amo_atar.getMoney() >= 15500)
        {
            cout << "You Got the Barg Alovera" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 3:
        if (amo_atar.getMoney() >= 35500)
        {
            cout << "You Got the Asal" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 4:
        if (amo_atar.getMoney() >= 14700)
        {
            cout << "You Got the Ocaliptos" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 5:
        if (amo_atar.getMoney() >= 25000)
        {
            cout << "You Got the Jinsing" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 6:
        if (amo_atar.getMoney() >= 8000)
        {
            cout << "You Got the Gol Gavzabon" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 7:
        if (amo_atar.getMoney() >= 15000)
        {
            cout << "You Got the Ostokhoddos" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 8:
        if (amo_atar.getMoney() >= 95000)
        {
            cout << "You Got the Zafaran" << endl;
            //be anbar atar ezafe she
        }
        else
        {
            cout << "You don't have enough money!" << endl;
        }
        break;
    case 0:
        break;
    default:
        break;
    }
}

void Market::Buy(Atar &amo_atar)
{
    cout << "\t\t\t Welcome to The Market" << endl;
    cout << "What Do you want to buy ?" << endl;
    cout << "(1) Level 1 goods" << endl;
    cout << "(2) Level 2 goods" << endl;
    cout << "(3) Security   Cost: 150,000T" << endl;
    cout << "(4) GUI   Cost: 200,000T" << endl;
    cout << "(5) Increasing APP's Server Capacity(more customers) Cost: 200,000T" << endl;
    cout << "(6) Lab   Cost: 350,000T" << endl;
    cout << "Press 0 to back to menu\n" << endl;
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        Buy_Herbs_Level1(amo_atar);
        break;
    case 2:
        if (Check_Herbs_Level2() == true)
        {
            Buy_Herbs_Level1(amo_atar);
        }
        break;
    case 3:
        if (amo_atar.getMoney() >= 150000)
        {
            Security = true;
            cout << "Your application is secure now!" << endl;
        }
        else
        {
            cout << "You Don't have enough money!" << endl;
        }
        break;
    case 4:
        if (amo_atar.getMoney() >= 200000)
        {
            GUI = true;
            cout << "GUI V2 initialized..." << endl;
        }
        else
        {
            cout << "You Don't have enough money!" << endl;
        }
        break;
    case 5:
        if (amo_atar.getMoney() >= 200000)
        {
            Increasing_Server_Capacity = true;
            cout << "Your Server's Capacity Increased.\nNow you can more customers" << endl;
        }
        else
        {
            cout << "You Don't have enough money!" << endl;
        }
        break;
    case 6:
        if (amo_atar.getMoney() >= 350000)
        {
            Lab = true;
            cout << "Labratory is ready to use..." << endl;
        }
        else
        {
            cout << "You Don't have enough money!" << endl;
        }
        break;
    case 0:
        break;

    default:
        cout << "Wrong Number!\nTry Again:" << endl;
    }
}

#endif