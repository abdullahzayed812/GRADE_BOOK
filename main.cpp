#include <iostream>
#include <string>

#include "gradeBook.h"

int main() {
  GradeBook myGradeBook("CS101 Introduction to Programming in C++", "Hamza Abdullah");

  myGradeBook.displayMessage();
  myGradeBook.determineClassAverage();
}