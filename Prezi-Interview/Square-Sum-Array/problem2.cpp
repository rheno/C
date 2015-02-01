#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long N, count, temp=0, solution;
    int x, p;
    
    vector<int> v;
    
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>x;
        v.push_back(x);
    }

    /*
    FILE* f;


    f = fopen("input.txt","r");
    fscanf(f,"%d",&x);

    N = x;
    
    
    while(fscanf(f,"%d",&x) != EOF){      
      v.push_back(x);
      
    }
    fclose(f);
    */

    for(int i=0;i<N;i++){
      count = i+1;
      solution = v[i];
      while(count<N){
          if(solution == 0){
              temp++;
          }
          solution+=v[count];
          count++;          
      }

      if(solution == 0){
              temp++;
      }
    }
    cout<<temp<<endl;

    
    return 0;
}