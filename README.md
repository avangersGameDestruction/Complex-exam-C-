# Complex-exam-Cpp

Question: C++ Programming: Complex Class A Complex Number Is Of The Form A + Bi Where A And B Are Real Numbers And I 2 = -1. For Example, 2.4 + 5.2i And 5.73 - 6.9i Are Complex Numbers. Here, A Is Called The Real Part Of The Complex Number And Bi The Imaginary Part. In This Part You Will Create A Class Named Complex To Represent Complex Numbers. (Some Languages,
This problem has been solved!

See the answer
C++ Programming:

Complex Class

A complex number is of the form a + bi where a and b are real numbers and i 2 = -1. For example, 2.4 + 5.2i and 5.73 - 6.9i are complex numbers. Here, a is called the real part of the complex number and bi the imaginary part.

In this part you will create a class named Complex to represent complex numbers. (Some languages, including C++, have a complex number library; in this problem, however, you write the complex class yourself.) The members of this class are as follows:

Private data members:

real and imag of type double - to represent the complex number (real + imag i)

Public member functions:

- Default constructor that will initialize real and imag to zero

- void input(istream&); //Input values from the specified stream for real and imag

- void output(ostream&); // Output the Complex number to the specified stream in this form e.g.,: 2.3 + 4.6i

- double getReal(); // Accessor method that returns the value of data member real

- double getImag(); //Accessor method that returns the value of data member imag

- void setReal(double); // Mutator method that sets the value of real

- void setImag(double); // Mutator method that sets the value of imag

Write a main() driver function that calls the appropriate member functions to do the following:

• Declare two Complex objects: c1 and c2.

• Prompt the user and use the input method to input complex values for the two objects c1 and c2. 3

• Display c1 and c2 using the output method.

• Use setReal() to change the value of real for object c2 to 22.2.

• Use getReal() to obtain the value of real for object c2; display the value on the terminal screen.

• Display the updated c2 value using the output() method.

Example (user input is italicized):

Enter values for real and imaginary coefficients: 17.4 3.9

Enter values for real and imaginary coefficients: 10.2 16.81

17.4 + 3.9i

10.2 + 16.8i

Enter a new value for the real coefficient: 22.2

The new real coefficient is 22.2

22.2 + 16.8i
