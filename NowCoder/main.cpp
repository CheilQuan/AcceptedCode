#include <iostream>
#include <fstream>

#include ".\CodingInterviews\42.h"
#include ".\CodingInterviews\2.h"
#include ".\2017ProgrammingTest\Alibaba.h"
#include ".\2017ProgrammingTest\Package.h"

int main(int argc, char **argv)
{
#define REIOS 0  //�����ض��򿪹أ�1 �ض��򵽸�Ŀ¼��"TestExample.txt"�ļ���;
                 //                0 �ӿ���̨����;   
#if REIOS  
    streambuf *backup = NULL;
    ifstream fin;
    fin.open("TestExample.txt");
    if (fin.is_open())
    {
        backup = cin.rdbuf();
        cin.rdbuf(fin.rdbuf());
    }
    else
        cerr << "<Warning:>"
        "\n\t The file \"TestExample.txt\" is not exist in current folder!" 
        "\n\t Please input your test example from the console!"<< endl;
#endif

    Chirl::Solution_42::test();

#if REIOS
    if (fin.is_open())
    {
        cin.rdbuf(backup);
    }
#endif

#if _WIN32
    system("pause");
#endif

    return 0;
}

