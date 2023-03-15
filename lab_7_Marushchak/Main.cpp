#include<iostream>
#include<Windows.h>
#include<map>
#include<string>


using namespace std;

class Students {

private:
    string surnameToFind;
    std::map<string, string> students;

public:

    Students(initializer_list< pair< const string, string > > name) : students(name)
    {
    }

    void Display() {
        cout << "��������:" << endl;
        for (auto it : students) 
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
    }
    void Find()
    {
        cout << "������ ������ �������: ";
        cin >> surnameToFind;
        cout << "*************************************" << endl;
        cout <<"��'� ��������: " << students[surnameToFind] << endl;
    }
};



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   Students students{ { "��������", "�����"}, {"������", "����"}};
   students.Display();
   cout << "*************************************" << endl;
   students.Find();

   system("pause");

	return 0;
}


