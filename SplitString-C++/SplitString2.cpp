#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
  string str("12 13 14 15 16");
  int buf; // Have a buffer integer
  stringstream is(str); // Insert the string into a stream

  vector<int> tokens; // Create vector to hold our words

  while (is >> buf){

    tokens.push_back(buf);
  }

  cout<<tokens[4]<<endl;
  return 0;
}
