// Time class defintion
// Member functions in Time.cpp
#include <string>

// preventing multiple inclusions of header code
#ifndef TIME_H
#define TIME_H

// Time class def
class Time {
 public:
  void setTIme(int, int, int);
  std::string toUniversalString() const; // 24 hour format
  std::string toStandardString() const; // 12 hour format
 private:
  unsigned int hour{0}; // 0-23
  unsigned int minute{0}; // 0-59
  unsigned int second{0}; // 0-59
}; // do NOT forget the semicolon

#endif


