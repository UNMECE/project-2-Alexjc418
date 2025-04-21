#include "physics_student.h"

Physics_Student::Physics_Student() : emphasis("Biophysics") {}

Physics_Student::~Physics_Student() {}

void Physics_Student::setEmphasis(const std::string& focusField) {
    emphasis = focusField;
}

std::string Physics_Student::getEmphasis() const {
    return emphasis;
}

std::string Physics_Student::getInfo() const {
    return "Physics Student: " + getFullName() + ", GPA: " + std::to_string(gpa) +
           ", Emphasis: " + emphasis + ", Level: " + grad_level +
           ", Enrolled: " + enrolled_semester + " " + std::to_string(enrolled_year) +
           ", Graduation: " + grad_semester + " " + std::to_string(grad_year);
}

