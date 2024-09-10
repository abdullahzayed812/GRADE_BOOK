#include <iostream>
#include <string>

#include "gradeBook.h"

int main() {
  GradeBook gradeBook1("CS101 Introduction to Programming in C++", "Hamza Abdullah");
  GradeBook gradeBook2("CS102 C++ Data Structures", "Abdullah Ibrahim");

  std::cout << "gradeBook1 initial course name is: " << gradeBook1.getCourseName()
            << "\ngradeBook2 initial course name is: " << gradeBook2.getCourseName() << "\n";

  gradeBook1.setCourseName("CS101 C++ Programming");

  std::cout << "gradeBook1 course name is: " << gradeBook1.getCourseName()
            << "\ngradeBook2 course name is: " << gradeBook2.getCourseName() << "\n";

  gradeBook1.displayMessage();
  gradeBook2.displayMessage();
}