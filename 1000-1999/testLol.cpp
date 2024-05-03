#include <iostream>
#include <fstream>
#include <random>

using namespace std;

int main() {
  // Seed the random number generator
  random_device rd;
  mt19937 gen(rd());

  // Define string length (adjust as needed)
  const int string_length = 200000;

  // Open output files for strings a and b
  ofstream string_a_file("string_a.txt");
  ofstream string_b_file("string_b.txt");

  if (!string_a_file.is_open() || !string_b_file.is_open()) {
    cerr << "Error: Could not open files for writing." << endl;
    return 1;
  }

  // Generate random binary characters (0 or 1)
  uniform_int_distribution<int> dis(0, 1);

  // Generate string a (all 0s)
  for (int i = 0; i < string_length; i++) {
    string_a_file << 0;
  }

  // Generate string b with random 0s and 1s
  for (int i = 0; i < string_length; i++) {
    string_b_file << dis(gen);
  }

  string_a_file.close();
  string_b_file.close();

  cout << "Large random binary strings generated and stored in 'string_a.txt' and 'string_b.txt'." << endl;

  return 0;
}
