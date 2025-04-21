#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "student.h"

class Art_Student : public Student {
private:
    std::string emphasis;

public:
    Art_Student();
    ~Art_Student();

    void setEmphasis(const std::string&);
    std::string getEmphasis() const;
    std::string getInfo() const override;
};

#endif

