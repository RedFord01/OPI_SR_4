#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int S=0, i;
  const int N=16;
  int mass[N];
  cout<<"Input 16 natural numbers:\n ";
  for(i=0;i<N;i++) cin>>mass[i];
  for(i=0;i<N;i++)
  {
    if(mass[i]%2 != 0 && mass[i]!=0) S+=mass[i];
  }
  cout<<"Sum= "<<S<<endl;

  return 0;
} 