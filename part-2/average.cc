// Christian Rodriguez
// christs@csu.fullerton.edu
// @christs1
// Partners: @AlessioSanchez20

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // X TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return -1;
  }

  // X TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  for (auto input : arguments) {
    std::cout << input << '\n';
    if (input == arguments[0]) {
      input = "0";
    }
    double value = std::stod(input);
    sum += value;
  }
  auto size = arguments.size();
  auto cast = static_cast<double>(size);

  // X TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  auto average = sum / (cast - 1);
  // X TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << '\n';
  return 0;
}
