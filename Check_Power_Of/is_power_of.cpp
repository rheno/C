#include <iostream>
#include <cmath>

using namespace std;

/* is n power of k */
bool is_power_of(int n, int k){
  double power = log10(n) / log10(k);
  double number;

  double decimal = modf(power, &number);

  if( decimal == 0){
    return true;
  }
 
  return false;
}

int main(){

  cout<<is_power_of(3,2)<<endl;
  
  return 0;
}
