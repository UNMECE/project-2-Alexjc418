#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "student.h"

class Physics_Student : public Student {
private:
    std::string emphasis;

public:
    Physics_Student();
    ~Physics_Student();

    void setEmphasis(const std::string&);
    std::string getEmphasis() const;
    std::string getInfo() const override;
};

#endif

