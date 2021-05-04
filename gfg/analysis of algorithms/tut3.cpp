// best average and worst case

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getSum(int arr[], int n)
{
    int sum = 0;
    // w1
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        // order of growth work c1n
        // c1n +c2--------> n
    }
    return sum;
}

int getSum(int arr[], int n)
{
    int sum = 0;
    if (n % 2 != 0)
        return 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
       
    }
    return sum;
}

// now  nothing we can say about the order of growth as now the situation is complex
// for odd ofg is constant
// for even its is linear.
// multiple cases  now --------------------> we divide them in three -----------> best worst avg

// best case ---------------> constant means n=odd which take the constant
// avg case --------------> impractical to case
// we dont know how user will give the input 
// if we know all possible cases and then find avg of all cases and then find avg order of growth.
// if we consider even or odd equally -------------> avg case is linear as odd(cons) + even(linear)=> linear
// worst case ---------------------------> n is even takes linear 

//cases --------------------> depends on how the ofg is becomng!

// we generally avoid best case ,consider it as bogus its of no use .
// avg case is impracticla to find.
// so worst case we only want to find., what max time it take
// and we take care of worst case if there are different cases.



// MATHMATICAL representation for the order of grwoth
// Big O=> represent exact bound or upper bound.
// Theta => represent exact bound.
// Omega => reprsent exact or lower bound.

// Big O is most used one.
// same  can be used to find space acquired by the algorithms .


int main()
{
    int n;

    return 0;
}