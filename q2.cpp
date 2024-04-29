#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
class String
{
 protected:
 enum { SZ = 80 }; //max size of Strings
 char str[SZ]; //array
public:
 String() //constructor, no args
 {
  str[0] = '\0';
 }
 String(char s[]) //constructor, one arg
 {
  strcpy(str, s);
 }
 void display() //display string
 {
  cout << str;
 }
 void concat(String s2) //add arg string to
 { //this string
  if (strlen(str) + strlen(s2.str) < SZ)
   strcat(str, s2.str);
  else
   cout << "\nString too long";
 }
};
class Pstring :public String
{
public:
 Pstring()
 {}
 Pstring(char s[])
 {
  int len = strlen(s);
  if (len < SZ)
   strcpy(str, s);
  else
  {
   for (int i = 0; i < (SZ); i++)
   {
    str[i] = s[i];
   }
  }
 }
};
int main()
{
 Pstring s, s1;
 s = "hello";
 s1 = "This string will surely exceed the width of the screen, which is what the SZ constant represents.";
 s.display();
 cout << endl;
 s1.display();
 cout << endl;

}

