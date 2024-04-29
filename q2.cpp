

#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////
class String
{
            private:
                        enum { SZ=80 };
                        char str[SZ];
            public:
                        String()
                                    {           strcpy(str, "");          }
                        String( char s[ ] )
                                    {           strcpy(str, s);           }
                        void display() const
                                    {           cout << str <<endl;     }
                        String operator += (String ss) 
                        {
                                    String temp;
                                    if( strlen(str) + strlen(ss.str) < SZ )
                                    {
                                                strcpy(temp.str, str);
                                                strcat(temp.str, ss.str);
                                    }
                                    else
                                    {           cout << "\nString overflow";    exit(1);             }
                                    return temp;
                        }
};
int main()
{
            String s1 = "Merry Christmas! ", s2 = "Happy new year!", s3;
            s1.display();                
            s2.display();
            s3 = s1 += s2;     
            s3.display();
            cout << endl;
}