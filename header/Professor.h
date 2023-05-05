#include "iostream"
#include "Person.h"

using namespace std;

class Professor : public Person {
public: 

    Professor();
    Professor(string name, string department, string rank);

    string getDepartment();
    string getRank();

    void changeInfo(string name, string department, string rank);
    void changeDepartment(string department);
    void changeRank(string rank);

    string getProfessorInfo();

private:
    string department;
    string rank;

};