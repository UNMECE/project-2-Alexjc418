#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int grad_year;
    std::string grad_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string grad_level;

public:
    Student();
    virtual ~Student();

    void setName(const std::string&, const std::string&);
    void setGPA(double);
    void setGradYear(int);
    void setGradSemester(const std::string&);
    void setEnrolledYear(int);
    void setEnrolledSemester(const std::string&);
    void setGradLevel(const std::string&);

    std::string getFullName() const;
    double getGPA() const;
    int getGradYear() const;
    std::string getGradSemester() const;
    int getEnrolledYear() const;
    std::string getEnrolledSemester() const;
    std::string getGradLevel() const;

    virtual std::string getInfo() const = 0;
};

#endif
