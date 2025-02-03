#include "gradeBook.h"

#include <iostream>
#include <string>

GradeBook::GradeBook(const std::string& courseName, const std::string& courseInstructor) {
  this->setCourseName(courseName);
  this->setCourseInstructor(courseInstructor);
}

const std::string& GradeBook::getCourseName() const { return this->courseName; }

void GradeBook::setCourseName(const std::string& courseName) {
  if (courseName.length() <= 25) {
    this->courseName = courseName;
  } else {
    this->courseName = courseName.substr(0, 25);

    std::cout << "Course name \" " << courseName << " \" is exceeded maximum length (25).\n"
              << "Limiting course name to first 25 character.\n";
  }
}

const std::string& GradeBook::getCourseInstructor() const { return this->courseInstructor; }

void GradeBook::setCourseInstructor(const std::string& courseInstructor) { this->courseInstructor = courseInstructor; }

void GradeBook::displayMessage() const {
  std::cout << "Welcome to grade book with " << this->getCourseName() << "\n"
            << " This course presented by " << this->getCourseInstructor() << "\n";
}

void GradeBook::determineClassAverage() const {
  int total;
  int gradeCount;
  int grade;
  int average;

  total = 0;
  gradeCount = 1;

  while (gradeCount <= 10) {
    std::cout << "Enter grade: ";
    std::cin >> grade;
    total += grade;
    gradeCount += 1;
  }

  average = total / 10;

  std::cout << "\nTotal of all 10 grade is " << total << std::endl;
  std::cout << "Class average is " << average << std::endl;
}