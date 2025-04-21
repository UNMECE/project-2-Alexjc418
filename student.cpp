#include "student.h"

Student::Student() : gpa(0.0), grad_year(0), enrolled_year(0) {}

Student::~Student() {}

void Student::setName(const std::string& first, const std::string& last) {
    first_name = first;
    last_name = last;
}
void Student::setGPA(double g) { gpa = g; }
void Student::setGradYear(int y) { grad_year = y; }
void Student::setGradSemester(const std::string& s) { grad_semester = s; }
void Student::setEnrolledYear(int y) { enrolled_year = y; }
void Student::setEnrolledSemester(const std::string& s) { enrolled_semester = s; }
void Student::setGradLevel(const std::string& l) { grad_level = l; }

std::string Student::getFullName() const { return first_name + " " + last_name; }
double Student::getGPA() const { return gpa; }
int Student::getGradYear() const { return grad_year; }
std::string Student::getGradSemester() const { return grad_semester; }
int Student::getEnrolledYear() const { return enrolled_year; }
std::string Student::getEnrolledSemester() const { return enrolled_semester; }
std::string Student::getGradLevel() const { return grad_level; }
