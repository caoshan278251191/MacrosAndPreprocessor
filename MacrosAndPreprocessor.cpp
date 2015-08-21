/* 
 * File:   main.cpp
 * Author: caoshan
 *
 * Created on August 19, 2015, 11:16 AM
 */

#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37


/*
 A macro is a fragment of code which has been given a name.
 *  Whenever the name is used, it is replaced by the contents of the macro.
 *  There are two kinds of macros.
 *  They differ mostly in what they look like when they are used. 
 * Object-like macros resemble data objects when used,
 *  function-like macros resemble function calls.

You may define any valid identifier as a macro, even if it is a C keyword. 
 * The preprocessor does not know anything about keywords.
 *  This can be useful if you wish to hide a keyword 
 * such as const from an older compiler that does not understand it. 
 * However, the preprocessor operator defined (see Defined) can never be defined as a macro,
 *  and C++'s named operators (see C++ Named Operators) cannot be macros when you are compiling C++.
 */
#include <iostream>
using namespace std;

int main()
{
  cout << "This is the line number " << __LINE__;
  cout << " of file " << __FILE__ << ".\n";
  cout << "Its compilation began " << __DATE__;
  cout << " at " << __TIME__ << ".\n";
  cout << "The compiler gives a __cplusplus value of " << __cplusplus;
  return 0;
}

/*
 __LINE__	Integer value representing the current line in the source code file being compiled.
__FILE__	A string literal containing the presumed name of the source file being compiled.
__DATE__	A string literal in the form "Mmm dd yyyy" containing the date in which the compilation process began.
__TIME__	A string literal in the form "hh:mm:ss" containing the time at which the compilation process began.
__cplusplus	An integer value. All C++ compilers have this constant defined to some value. Its value depends on the version of the standard supported by the compiler:
199711L: ISO C++ 1998/2003
201103L: ISO C++ 2011
Non conforming compilers define this constant as some value at most five digits long. Note that many compilers are not fully conforming and thus will have this constant defined as neither of the values above.
__STD_HOSTED__	1 if the implementation is a hosted implementation (with all standard headers available)
0 otherwise.
 */
