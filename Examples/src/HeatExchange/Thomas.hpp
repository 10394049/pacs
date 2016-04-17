#ifndef HH_Thomas_HH
#define HH_Thomas_HH

#include <iostream>
#include <vector>

using namespace std;
void Thomas( vector<double> &a, vector<double> &b, vector<double> &c, vector<double> &f, vector<double> &x){
  
  unsigned const int n=a.size()-1;
  vector<double> gamma(N), y(N);
  gamma[0]=1/a[0];
  for(unsigned int i=1; i<n; i++){
    gamma[i]=1/(a[i]-b[i]*gamma[i-1]*c[i-1]);
  }
  
  y[0]=gamma[0]*f[0];
  for(unsigned int i=1; i<n; i++){
	y[i]=gamma[i]*(f[i]-b[i]*y[i-1]);
  }
  
  x[n]=y[n];
  for(unsigned int i=1; i<n+1; i++){
    x[n-i]=y[n-i]-gamma[n-i]*c[n-i]*x[n+1-i];
  }
  
}
#endif
