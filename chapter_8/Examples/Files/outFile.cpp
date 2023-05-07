#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  std::ofstream outputFile("data.txt");

  if(outputFile.is_open()) {
    outputFile << "Hello, world!" << endl;
    outputFile << 42 << endl;
    outputFile.close();
    cout << "Data written to the file. " << endl;
  } else {
    cout << "Failed to open the file." << endl;
  }

  return 0;

}

