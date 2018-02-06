#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    double heg;

public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name =n;
        age =a;
        heg =h;

    }

    int getId()
    {
        return id;
    }
    string getName ()
    {
        return name;
    }
    int getAge ()
    {
        return age;
    }
    double getHeg()
    {
        return heg ;
    }

};
int main ()
{
    Student Noctis(36548,"Noctis",20,176);
    Student Ignis(36549,"Ignis",22,183);
    Student gladioius(36550,"gladioius",23,198);
    Student prompto(36551,"prompto",20,173);

    cout << " ID : " << Noctis.getId() <<endl;
    cout << " Name : " << Noctis.getName() <<endl;
    cout << " Age : " << Noctis.getAge() <<endl;
    cout << " Height : " << Noctis.getHeg() <<endl;


    cout << " ID : " << Noctis.getId() <<endl;
    cout << " Name : " << Noctis.getName() <<endl;
    cout << " Age : " << Noctis.getAge() <<endl;
    cout << " Height : " << Noctis.getHeg() <<endl;


    cout << " ID : " << Noctis.getId() <<endl;
    cout << " Name : " << Noctis.getName() <<endl;
    cout << " Age : " << Noctis.getAge() <<endl;
    cout << " Height : " << Noctis.getHeg() <<endl;


    cout << " ID : " << Noctis.getId() <<endl;
    cout << " Name : " << Noctis.getName() <<endl;
    cout << " Age : " << Noctis.getAge() <<endl;
    cout << " Height : " << Noctis.getHeg() <<endl;



    return 0;
}
