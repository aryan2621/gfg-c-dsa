// order of growth 

// a function f(n) is said to be  grwoing faster than g(n) if

// assumptions t>=0; fn,gn>=0;

// lim      fn/gn=infinite
// n->infin

//or

// lim      gn/fn=0
// n->infin


// limmitaions -> your program 1000   your freind -> n+1
// but what if input never reah to 999.
// then your program will always be slower.

// order of growth -> only crietreria to measure efficiency 
// order ofgrowth A >B
// a is bad

// fn= n^2 +n+6
// gn=2n+5;

// lim       2n+1/n^2 + n+6=0
// n->infin


// direct way 
// 1.ignore lower order terms
// 2.ignore constants


// c < loglogn < logn < n^1/3 < n^1/2 < n < n^2 < n^3 < 2^n < n^n;

// f1 2n^2 + n+6;
// gn=100n +3

// on solving all these -> fn ofg-> n^2    gn ofg -> n
// so fn is bad.

// fn c1logn + c2
// gn c3n + c4loglogn +c5;

// ignore c2 c1 fn=logn;
// ignore c3 loglogn c5 gn=n

// fn is better


// fn =c1^n2 + c3n +c4;-----> fn=n^2
// gn=c5nlogn +c6n + c7;------> gn=nlogn

// fn/gn => gn is better



