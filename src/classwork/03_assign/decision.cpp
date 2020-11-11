//cpp
#include "decision.h"
#include <string>
#include <iostream>
//This is conditional homework?

std::string get_letter_grade_using_if(int grade)
{
    std::string return_grade;
    if (grade >= 90 && grade <= 100)
    {
        return_grade = 'A';
    }
    else if (grade >= 80  && grade <= 89)
    {
        return_grade = 'B';
    }

    else if(grade >= 70 && grade <= 79 )
    {
        return_grade = 'C';
    }
    else if (grade >= 0 && grade <= 59)
    {
        return_grade = "D";
    }
    else
    {
        return_grade = "Invalid option";
    }

    return 0;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string return_grade;

    switch(grade)
    {
    case 1:
        return_grade = "A";
        break;
    case 2:
        return_grade = "B";
        break;
    case 3:
        return_grade = "C";
        break;
    case 4:
        return_grade = "D";
        break;
    default:
        return_grade = "Invalid option";

    }

    return return_grade;
}
