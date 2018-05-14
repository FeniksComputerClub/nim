#pragma once

#include <iosfwd>

class Pile
{
 private:
  int m_number_of_matches;

 public:
  friend std::ostream& operator<<(std::ostream& os, Pile const& pile);
};
