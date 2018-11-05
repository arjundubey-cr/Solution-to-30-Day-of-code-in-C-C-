#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
// THE CODE ABOVE IS ALREADY AVAILABLE IN QUESTION 
// YOU HAVE TO TYPE IN THE CODE BELOW THIS LINE IN ORDER TO PASS THE TEST CASE..
  
    int a;
    double b;
    char c;
    scanf("%d %lf %[^\n]%*c",&a,&b,&c);
    printf("%d %lf",a+i,d+b);
    printf("%s",s);
    printf("%s",c);
    
  return 0;
}
