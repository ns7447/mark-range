#include <iostream>
   
using namespace std; int main()
{
string a;
int b , count = 0; while (cin >> a >> b)
if (b>=80) count++;
cout << "Number of the student got 80-100 marks " << count ;
return 0; }
