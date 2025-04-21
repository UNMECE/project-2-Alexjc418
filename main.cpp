#include <iostream>
#include <fstream>
#include <vector>
#include "art_student.h"
#include "physics_student.h"

int main() {
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;


    Art_Student* a1 = new Art_Student();
    a1->setName("John", "Smith");
    a1->setGPA(3.5);
    a1->setEmphasis("Art Studio");
    a1->setGradLevel("undergrad");
    a1->setEnrolledSemester("Fall");
    a1->setEnrolledYear(2021);
    a1->setGradSemester("Spring");
    a1->setGradYear(2025);
    art_students.push_back(a1);


    Physics_Student* p1 = new Physics_Student();
    p1->setName("Jane", "Cook");
    p1->setGPA(3.8);
    p1->setEmphasis("Astrophysics");
    p1->setGradLevel("grad");
    p1->setEnrolledSemester("Spring");
    p1->setEnrolledYear(2022);
    p1->setGradSemester("Fall");
    p1->setGradYear(2026);
    physics_students.push_back(p1);

    std::ofstream outfile("student_info.dat");
    for (auto a : art_students)
        outfile << a->getInfo() << "\n";
    for (auto p : physics_students)
        outfile << p->getInfo() << "\n";

    outfile.close();

    for (auto a : art_students) delete a;
    for (auto p : physics_students) delete p;

    return 0;
}
