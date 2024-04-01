# C++ Fundamental

## const correctness
Prevent accidental modifications of variables 

Constant Variables 
```cpp 
const int MAX_SIZE = 100;
```

Constant Function Parameters
```cpp 
void print(const std::string& message);
```

Const References
```cpp 
void print(const std::string& message);
```

Constant Member Functions
-  cant modify any member variables of the class.
```cpp
class MyClass {
public:
    int getValue() const; // Const member function
private:
    int value;
};

int MyClass::getValue() const {
    return value;  
}
```
`value++;` is not allowed in `getValue()`

Const Pointers
```cpp
const int* ptr;  // Pointer to constant integer (can modify pointer object)
int* const ptr = &someVariable;  // Constant pointer to integer (can modify pointed object)
```

## Classes and Inheritance
### access specifiers
`public` 
- class members to be accessible from **outside** the class

`private`
- accessible from **inside** the class.

`protected`
- allow **derived** classes to access.

```cpp
// keyword_protected.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class X {
public:
   void setProtMemb( int i ) { m_protMemb = i; }
   void Display() { cout << m_protMemb << endl; }
protected:
   int  m_protMemb;
   void Protfunc() { cout << "\nAccess allowed\n"; }
} x;

class Y : public X {
public:
   void useProtfunc() { 
      Protfunc();  // protected function from parent
   }
} y;

int main() {
   // x.m_protMemb;         error, m_protMemb is protected
   x.setProtMemb( 0 );   // OK, uses public access function
   x.Display();
   y.setProtMemb( 5 );   // OK, uses public access function
   y.Display();
   // x.Protfunc();    error, Protfunc() is protected
   y.useProtfunc();      // OK, uses public access function
                        // in derived class
}
```

## Constructors / Destructors
```cpp
class MyClass {
public:
    // Constructor : called when objects are created.
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor : called when `delete`, objects go out of scope, or  
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};
```


## pointer vs reference 
### pointer 
- variable storing the memeory address of an object
- use to perform any operation, access/ modify of the variable
- `save memory space` (instead passing whole file data)
- 32 bit on 32bit pc, 64 bit on 64bit pc
- nested pointer (pointer of a pointer)
- pointer can be nullptr

### reference 
- variable as an alias to an existing object/value


##  Templates
define a class or function without specifying the exact data types
```cpp
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    void display() const {
        std::cout << "Pair: " << first << ", " << second << std::endl;
    }
};

int main() {
    Pair<int, double> pair1(10, 3.14);
    pair1.display();

    Pair<std::string, char> pair2("Hello", 'X');
    pair2.display();

    return 0;
}

```

## Polymorphism
- member function has different function implementation

### static (compile time/ early binding) 
- function overloading
- operator overloading
- easier implmentation and type safe 

```cpp
#include <iostream>

class Overload {
public:
    void display() {
        std::cout << "No parameter" << std::endl;
    }

    void display(int x) {
        std::cout << "Int parameter: " << x << std::endl;
    }

    void display(double y) {
        std::cout << "Double parameter: " << y << std::endl;
    }
};

int main() {
    Overload obj;
    obj.display();     // Calls display() with no parameter
    obj.display(10);   // Calls display(int)
    obj.display(3.14); // Calls display(double)

    return 0;
}
```


### dynamic (run time/ late binding)
- virtual function (class/member implementation)
- executable code size smaller

```cpp
#include <iostream>

class Animal {
public:
    virtual void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound(); // Dog barks
    animal2->sound(); // Cat meows

    delete animal1;
    delete animal2;

    return 0;
}
```

### Virtual function
- member function can be overriden in derived classes
- late binding
- overload for regardless type and superclass
- **Pure** virtual functions
    - `virtual` keyword and `= 0` at the end

### Abstract Class (Interfaces)
contain one or more **pure virtual functions**.

```cpp
#include <iostream>

class Shape {
public:
    // Pure virtual function
    virtual double area() const = 0;

    // Concrete function
    void displayArea() const {
        std::cout << "Area: " << area() << std::endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    circle.displayArea();    // Area: 78.5398
    rectangle.displayArea(); // Area: 24

    return 0;
}
```

## struct vs class
### struct
-  user-defined composite type that consist of fields/ member with different types
- `public` by default
- simple data structures

```cpp
struct Person {
    std::string name;
    int age;
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
```

### class
- consist of data and functions
- `private` by default
- Supports inheritance with derived classes.

### union
- same memory location
- only contain one object from member list at a time
- only one member can be accessed at a time
- only the first member can be initialized 
- conserving memory

### enum
- named interger constant (only number)

---
### STL (Standard Template Library)
- common classes for C++ 
- provides algorithms, containers, functions and literators
- `std` namespace

### namespace
- group logically related code elements
- Preventing Name Collisions

### vector
```cpp
vector<int> vect; 
vect.push_back(10);

vector<int> vect(3, 10); // size 3, value 10
vector<int> vect{ 10, 20, 30 }; 
```
- dynamic size
- auto memory allocation
- function
    - iterator
    - sorting
    - get size

### array
```cpp
int* arr = new int[100];
delete[] arr;
```

- size
    - `sizeof(array) / sizeof(array[0])` 

## pointer
`*` -> dereference operator

```cpp
int *p;
int a;
p = &a;  // addresss of a

a = 42  // *p = 42
*p = 17 // a = 17
```

## Smart pointer
- pointers but provide additional functionalities
- improve memory safety and make memory management easier
- owns raw pointer
- auto delete 

### unique pointer
- `std::unique_ptr`
- one owner of the underlying pointer (memory)
- can't be copy

### shared pointer
- `std::shared_ptr`
- multiple owners (of memory)
- reference counting
- delete when all references destroy
- for **multithreading**

### weak pointer
- `std::weak_ptr`
- weak reference
- no increment in reference count
- provide access to an object which owned by one or more shared_ptr
- observer object but not reqiure to remain alive
- Avoiding Strong Reference Cycles

---

### Concurrency 
- doing multiple things at the same time

### multithreading
- simultaneous execution of two or more parts of a program 
- multiple computing threads of a single process

### multiprocessing
- separate memory and resources for each process
