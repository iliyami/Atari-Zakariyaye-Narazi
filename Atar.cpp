#include"Atar.h"

void Atar::setMoney(double money)
{
    ptr->setMoney(money);
}
double Atar::getMoney() const
{
    ptr->getMoney();
}

void Atar::setReputation_Level(int level)
{
    ptr->setReputation_Level(level);
}
int Atar::getReputation_Level() const
{
    ptr->getReputation_Level();
}

void Atar::setReputation_amount(int amount)
{
    ptr->setReputation_amount(amount);
}
int Atar::getReputation_amount() const
{
    ptr->getReputation_amount();
}   

Atar::Atar(): ptr( new Security_Layer)
{
    ptr;
}

void Atar::initialize_vectors()
{
    ptr->initialize_vectors();
    
}

int Atar::get_repository_herbs_index(string herb_name) const
{
    ptr->get_repository_herbs_index(herb_name);
}

void Atar::set_repository_amount(string herb_name,double amount)
{
    ptr->set_repository_amount(herb_name, amount);
}

void Atar::set_repository_amount(double Amount, int index)
{
    ptr->set_repository_amount(Amount, index);
}

double Atar::get_repository_amount(string herb_name) const
{
    ptr->get_repository_amount(herb_name);
}

double Atar::get_repository_amount(int index) const
{
    ptr->get_repository_amount(index);
}

int Atar::get_Level2_Rep() const
{
    ptr->get_Level2_Rep();
}
int Atar::get_Level3_Rep() const
{
    ptr->get_Level3_Rep();
}
int Atar::get_Level4_Rep() const
{
    ptr->get_Level4_Rep();
}

void Atar::Show_State()
{
    ptr->Show_State();
}
