#include "art_student.h"

Art_Student::Art_Student() : emphasis("Art Studio") {}

Art_Student::~Art_Student() {}

void Art_Student::setEmphasis(const std::string& emphasisType) {
    emphasis = emphasisType;
}

std::string Art_Student::getEmphasis() const {
    return emphasis;
}

std::string Art_Student::getInfo() const {
    return "Art Student: " + getFullName() + ", GPA: " + std::to_string(gpa) +
           ", Emphasis: " + emphasis + ", Level: " + grad_level +
           ", Enrolled: " + enrolled_semester + " " + std::to_string(enrolled_year) +
           ", Graduation: " + grad_semester + " " + std::to_string(grad_year);
}
