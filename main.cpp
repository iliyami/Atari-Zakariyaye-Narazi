#include"App.h"
#include<iostream>
using namespace std;

int main()
{   
    srand(time(0));
    
    App app_instance;
    app_instance.ShowMenu();

    return 0;
}