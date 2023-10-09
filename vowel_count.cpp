#include <iostream>
using namespace std;
int main()
{
  int c = 0, counts = 0;
  char s[1000];

  cout<<"Input a string\n"<<endl;
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      counts++;
    c++;
  }

  cout<<"Number of vowels in the array : "<<counts<<endl;

  return 0;
}
