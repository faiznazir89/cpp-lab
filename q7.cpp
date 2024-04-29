#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
protected:
//NOTE: not private
unsigned int count;
//count
public:
Counter() : count()
//constructor, no args
{ }
Counter(int c) : count(c)
//constructor, one arg
{ }
unsigned int get_count() const
//return count
{ return count; }
Counter operator ++(int)
{
    return Counter(count++);
}
Counter operator ++ ()
//incr count (prefix)
{ return Counter(++count); }
};
////////////////////////////////////////////////////////////////
class CountDn : public Counter
{
public:
CountDn() : Counter()
//constructor, no args
{ }
CountDn(int c) : Counter(c)
//constructor, 1 arg
{ }
CountDn operator --(int)
{
    return CountDn(count--);
}
CountDn operator -- ()
//decr count (prefix)
{ return CountDn(--count); }
};
////////////////////////////////////////////////////////////////
int main()
{
    CountDn c1;
CountDn c2(100);//class CountDn
cout << "\nc1=" << c1.get_count();
cout << "\nc2=" << c2.get_count();//display
//displ
++c1; ++c1; ++c1,c1++;
cout << "\nc1=" << c1.get_count();//increment c1
//display it
--c2; --c2,c2--;
cout << "\nc2=" << c2.get_count();//decrement c2
//display it
CountDn c3 = c2--;
cout << "\nc3=" << c3.get_count();
cout << endl;
return 0;
}