  
 // Author:Shreyansh_G
 // Convert this program to C++
 // 1.change to C++ io
 // 2.change to one line comments
 // 3.change defines of constants to const
 // 4.change array to vector<>
 // 6.inline any short function


#include <iostream>
#include <vector>
using namespace  std;
const int N=40;

inline int sum(int& p, int n, vector <int> d) {
    p = 0;
    for(int i = 0; i < n; ++i)
        p += d[i];
  return p;      
}


int main(void)

{
int i;
int accum = 0;
vector <int> data(N);

for(i = 0; i < N; ++i)
        data[i] = i;
 
sum(accum,N, data);
cout <<"sum is \n" << accum <<endl; 

return 0;
}