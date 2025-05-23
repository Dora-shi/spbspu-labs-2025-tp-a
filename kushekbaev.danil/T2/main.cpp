#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <limits>
#include "datastruct.hpp"

int main()
{
  using namespace kushekbaev;
  std::vector< DataStruct > data;
  while (!std::cin.eof())
  {
    std::copy
    (
      std::istream_iterator< DataStruct >(std::cin),
      std::istream_iterator< DataStruct >(),
      std::back_inserter(data)
    );
    if (!std::cin)
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n');
    }
  }

  std::sort(data.begin(), data.end());
  std::copy(std::begin(data), std::end(data), std::ostream_iterator< DataStruct >(std::cout, "\n"));
}
