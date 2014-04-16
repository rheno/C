#ifndef __SplitString__H

#include<vector>

#include<string>

using namespace std;

class SplitString{
  public :
    
    SplitString(string strings);
    
    ~SplitString();
    
    SplitString(const SplitString&S);
    
    SplitString &operator=(const SplitString&S);
    
    string getSplitString();
    
    void setSplitString(string input);
    
    vector<string> split();  

  private :
    string inputString;
};

#endif
