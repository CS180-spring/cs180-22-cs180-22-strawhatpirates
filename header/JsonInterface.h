#ifndef JSONINTERFACE_H
#define JSONINTERFACE_H

#include <iostream> 
#include <vector>
#include <fstream>
#include <algorithm>
#include <limits>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

#include "Professor.h"
#include "Student.h"
#include "../lib/json.hpp"

using namespace std;

class JsonInterface
{
    public:
        JsonInterface(); //mode = true
        void writeFileStu(vector<Student> dataStu);
        void writeFileProf(vector<Professor> dataProf);
        vector<Student> readFileStu();
        vector<Professor> readFileProf();
        
        void add();
        void addProfessor();
        void addStudent();

        void sort();
        void sortStudent();
        void sortProfessor();

        void search();
        void searchProfessor();
        void searchStudent();

        void remove();
        void removeProfessor();
        void removeStudent();

        void update();
        void updateProfessor();
        void updateStudent();

        void edit();
        void editProfessor();
        void editStudent();

        void print();
        void printStudents();
        void printProfessors();

        void changeMode();
        bool getMode();
    private:
        vector<Professor> dataProf;
        vector<Student> dataStu;
        bool mode = true;
};

#endif // JSONINTERFACE_H
