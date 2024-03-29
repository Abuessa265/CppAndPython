#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Input vector
    vector<int> v{ 10, 20, 30, 30, 30, 40, 50 };
  
    // Print vector
    cout << "Vector contains :";
    for (int i = 0; i < v.size(); i++)
        cout << " " << v[i];
    cout << "\n";
  
    vector<int>::iterator low1, low2, low3;
      
    // std :: lower_bound
    low1 = lower_bound(v.begin(), v.end(), 1);
    low2 = lower_bound(v.begin(), v.end(), 35);
    low3 = lower_bound(v.begin(), v.end(), 55);
  
    // Printing the lower bounds
    
    cout
        << "\nlower_bound for element 30 at position : "
        << (low1 - v.begin());
    cout
        << "\nlower_bound for element 35 at position : "
        << (low2 - v.begin());
    cout
        << "\nlower_bound for element 55 at position : "
        << (low3 - v.begin());
  
    return 0;
}