#include "solution.hpp"
#include "student.hpp"
#include <fstream>
#include <string>

Student ReadStudentRecFromStream(std::istream& is) {
  // your implementation here...
  std::string first_name;
  std::string last_name;
  unsigned int uin;
  double gpa;
  char comma;

  is >> first_name;
  if (is,fail()) {
    return Student{};
  }

  is >> last_name;
  if (is.fail()) {
    return Student{};
  }
  if (last_name.back() != ',') {
    return Student{};
  }

  last_name.pop_back();

  is >> uin;
  if (is.fail()) {
    return Student{};
  }

  is >> comma;
  if (is.fail() || comma != ',') {
    return Student{};
  }

  is >> gpa;
  if (is.fail()) {
    return Student{};
  }

  std::string full_name = first_name + " " + last_name;
  
  return Student(full_name, uin, gpa;
}
