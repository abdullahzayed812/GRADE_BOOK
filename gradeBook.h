#include <iostream>
#include <string>

class GradeBook {
 private:
  std::string courseName;
  std::string courseInstructor;

 public:
  GradeBook(const std::string&, const std::string&);

  const std::string& getCourseName() const;

  void setCourseName(const std::string&);

  const std::string& getCourseInstructor() const;

  void setCourseInstructor(const std::string&);

  void displayMessage() const;

  void determineClassAverage() const;
};