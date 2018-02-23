# 2015_OSU_Computer_Science_I
coursework from my Computer Science I course at OSU

## Week 1
#### animal.cpp        
a simple program which asks the user for their favorite animal and returns the same value

## Week 2
#### average.cpp
a program that gets 5 numbers from the user and returns the average of those numbers
#### tempConvert.cpp
a program that converts celcius temperatures to fahrenheit temperatures
#### change.cpp
asks the user for a number of cents from 0-99 and outputs how many of each type of coin would represent that amout with the fewest total number of coins.

## Week 3
#### numGues.cpp
This is a program that prompts the user to enter an integer that the player will try to guess. It thenpromts the player for an integer If the player's guess is higher than the target number, the program displays "too high". If the user's guess is lower than the target number, the program displays "too low". The player is given additional guesses until the target number is reached. The program then displays "you guessed it in 'n' tries" where 'n' is the number of guesses it took to reach the target number.
#### minmax.cpp
This program asks the user how many integer he or she would like to enter. The program then prompts the
user to enter that many integers. After all the numbers have been entered, the program displays the largest
and smallest of those numbers.
#### rangeSum.cpp
This is a program that prompts the user to enter two integers and then adds up all the integers between them
(inclusive) and displays the total. The user is allowed to enter the two values in either order.

## Week 4
#### hailstone.cpp and testhailstone.cpp
This is a function that takes the starting integer of a hailstone sequence as a parameter and returns how
many steps it takes to reach 1
#### fallDistance.cpp and testFallDistannce.cpp
This is a function that can be used to determine the distance an object falls due to gravity in a specific
time period by using the formula: d = (1/2)gt^2 where d is the distance in meters, g is 9.8, and t is the
time in seconds that the object has been falling. This function takes time as an argument and returns the
distance in meters that the object has fallen in that time.
#### smallSort.cpp and testSmallsort.cpp
This is a void function that takes three int parameters by reference and sorts their valuees into ascending
order, so that the first parameter now has the lowest value, the second parameter the middle value, and the
third parameter has the highest value.

## Week 5
#### geomMain.cpp
used to teest LineSegment and Point
#### LineSegment.cpp, LineSegment.hpp
This is a class called LineSegment that contains two Points that represent its two endpoints. It has get
set methods for both fields and a constructor that takes two Point parameters and passes them to the set
methods to initialize the data members. It also contains a method called length that returns the length of
the LineSegment - by using the distanceTo method on its endpoints - and a method called slope that returns
the slope of the LineSegment.
#### Point.cpp, Point.hpp
This is a class called Point that contains two doubles that represent its x- and y-coordinates. It has get
and set methods for both fields. It has a constructor that takes two double parameters and passes those
values to the set methods to initialize its fields. It has a default constructor that initializes both
coordinates to 0. It also contains a method called distanceTo that takes as a parameter a constant reference
to another Point and returns the distance from the Point that was passed as a parameter to the Point that
we called the method of.

## Week 6
#### findMode.cpp and testFindMode.cpp
This is a function which takes as parameters an array of ints and the size of that array and returns a vector
containing the mode(s). If there is just a single most frequent value, the vector will only contain that one
value, but if multiple vlues tie for maximum frequency, the vector will contain all such values. This includes
the case where every number in the array appears only once. Each mode appears only once in the vector. The
values in the vector are returned in ascending order.

## Week 7
#### cartMain.cpp
Tests the ShoppingCart and Item Classes
#### Item.cpp and Item.hpp
This is a class that consists of a string called name, a double called price, and an int called quantity.
The price represents the price per unit, so that an Item with the name "apple" with a price of "0.80" and a
quantity of 4, each of the 4 apples is 0.80 each.
#### ShoppingCart.cpp and ShoppingCart.hpp
This is a class which contains as a data member an array of pointers-to-item (Item*). It can contain up to
100 Item*. It also has an int data member called arrayEnd that keeps track of the index of
the next empy spot in the array. It has an addItem function that takes as a parameter a pointer
to an Item and adds it to the array (and updates arrayEnd). It also has a function called totalPrice that
returns the total cost of all Items in the ShoppingCart.

## Week 8
#### libraryMain.cpp
A program which uses object oriented design to implement a library containing books and patrons who check out books.
#### Book.cpp and Book.hpp
A Class which represents a book in a library
#### Library.cpp and Library.hpp
A class which represents the Library itself, consisting of books and patrons
#### Patron.cpp and Patron.hpp
A class which represents patrons who check out books and are fined for turning in books late
