# Chapter 9

## 9.1

Two important software engineering concepts in C++: seperating interface from implementation, and using an include guard in a header to prevent header code from being included more than once. A class can only be defined once.

**Interface of a Class**

Interface: how to use, not how class was implemented.

`Public` member functions = public services of a Class.

Ex: `Time.h` file will hold class definition, while `Time.cpp` will hold member functions definition. We do this for reusability, clients have an interface (member function signatures), and to hide implementation from client.

Convention would break down the class' implementation like this:
`ClassName.h` holds the class' definition, while `ClassName.cpp` holds the member function definitions.

With this, the client can use the class in their own C++ program.

Quiz Question: Why does the class' header file, even though we designed it to hide the details of the class, still need to include private data members? We include them because the compiler must KNOW the data members of the class in order to determine how much memory each object of the class needs.

*The include guard*
We write the definition within an include guard because we do not want to have a class defined twice.

```
#ifndef CLASSNAME_H
#define CLASSNAME_H

...

#endif

```

