## Array Multiplication
So... 
This directory houses two files, one in C++, and one in Python. Why? As we move further along you will see differences between C++ (A low-level programming language, ie. something that is compiled) and Python3 (a scripting language, ie. something interpreted, the difference isn't important right now, just know they are different.)
Below is the C++ with an explanation on every line.

>>#include <iostream> // This is importing iostream, shorthand for Input-Output stream, what allows you to take input, and give output to console.
>>
>>int main() {      //long story but we need this, the int could also be void, just with the int it will return a 0 at the end of the program to tell us everything worked properly
>>    int arr[] = { 2,3,4,5,7 };  //now these are arrays, a set of digits in a list
>>    int foo[] = { 3,2,4,5,8 };
>>    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){   //see for loops, below
>>        std::cout << foo[i] * arr[i] << std::endl; //std::cout << "Text Here"; prints to console
>>    }
>>}

    So lets take a look at the for loop. A for loop loops through things a specified amount of times. A for loop takes three arguments, so first a variable to use in the loop, a conditional statement, and third something that will happen after everytime the code is run.
A basic for loop that will print every number up to 5, note the i++ increments int i by one after every loop: 
>>for (int i = 0; i < 5; i++) {
>>  cout << i << "\n";
>>}
