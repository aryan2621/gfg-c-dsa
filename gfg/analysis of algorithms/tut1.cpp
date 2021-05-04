// write a function to find the sum first n natural number.

// i/o n=3
// o/p =6

// solution first

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// first solution->

int first(int n)
{
    return n * (n + 1) / 2;
}

// second solution->

int fun2(int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num = num + i; // equation -1
    }
    return num;
}

// third solution ->

int fun3(int n){
    int sum=0;
    for (int i = 0; i <=n; i++)
    {
      for (int j = 0; i <=i; j++)
      {
          sum++;
      }
      return sum;
    }
// (1)+(1+1)+(1+1+1).....
}

// the analysis which deals with all these issue like 
// which analysis ,whicch algorithms we have to deal 
// and which from these we have to deal with.

// in algorithms analysis we do the measuring order of growth wrt input size.

// fun1( )-> c1;
// as this function will always do the three operation .

// fun2()-> c2n +c3;
// first some constant work -> this work always going to happen once.
// some work depend on n like equation -1 (num = num + i;);

// func3()->c1n^2 +  c2n+ c3;
// this will run n(n+1)/2;
// with some constant work


// when we do analysis of algorithms 
// we always consider which are larger than 0 or equal to 0;
// time taken always greater than 0;


//  time taken |        /
//             |       /fun2()-> c2n +c3;
//             |      /
//             |     /
//     c1=10   |-----------------------------fun1()->c1
//             |   /
//    c3=5-----|  /  
//             |_____________________________

                    // n->

                    // n>=0;
                    // fun1(),fun2()>=0;


// for low  values fun1> fun2 but for high value fun2>fun1;

// for proper analysis we do the order of growth
// we do the n-> infinite highvalues

// c1-> some operation high like 10 instrc/sec

// after  certain time ur friend take high time;
// 2n+5>=10
// n >2.5 graeter than equal to three,means after 3 your friend take high time.


// suppose  your friend brings high fast machine and by which 2n+5 -> reduce to n+1;
// func1()=1000;-> your machine is slow


// again your program is slow for low values and better for high values


                // fun3() quadratic from origin
//  time taken |    |   /
//             |    |   /fun2();
//             |      /
//             |     /
//    c1=1000  |-----------------------------fun1()
//             |   /
//    c3=5-----|  /  
//             |_____________________________

// n+1>=1000;
// n>= 999;
// after  this your program is better.





int main()
{

    return 0;
}