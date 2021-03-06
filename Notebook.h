#ifndef NoteBook_H
#define NoteBook_H
#include <iostream>
#include <vector>

using namespace std;

class Notebook
{
private:
    //For keeping Notes
    vector <string> notebook;
public:
    //For Editing NoteBook
    void Edit_Note();

    //For Adding to NoteBook
    void Add_Note();

    //System of Notebook
    void Initialize_NoteBook();

    //Printing Notes
    void print();

    //For Reading Notes
    void Read_Note();
};
#endif