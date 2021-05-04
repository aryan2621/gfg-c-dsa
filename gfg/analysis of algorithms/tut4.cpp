// Big O nottation (upper bound on order of grwoth).

// we say that fn=O(g(n)) iff there 
// exist constants c and n. such that fn<=cgn for all n >=n.


// |     cg(n)
// |      /  /f(n)=2n+3
// |     / /
// |    //
// |  //
// |/ /
// | /
// |/_______________________
        // n->

// shortcuts to find the Big O notations of any order of growth.

// Example fn=2n+3;
// written  is O(n);

// Example fn =3n^2 + 2n +100;
// writen as O(n^2)

// Example 4n + logn+30;
// written as O(n);

// upper bound equal or higher oredr growth.

// fn=2n+3
// by applying the maths of Big o

// fn<=cgn for all n=>n.
// 2n+3<=cn; for n>=n.
// now how to find the c and n.
// take the c as next integer in lhs thats 2+1;
// and put c in eqn as 3
// n.=3
// that after n=3 cgn>=fn
// big O simply show the order of growth but in modified form by makng upper or exact bound on oredr of growth.

// {n/4 ,2n+3 ,n/100+ logn ,n+1000 , n/1000, 100.......logn.....} O(n)
// oredr of growth less than n also comes under this 
// { n^2+n , 2n^2, n^2+1000n, n^2 +2logn +6.....} O(n^2)
// { 1000,2 ,3,4,5/.......} O(1)


// O(n) comes under O(n^2)
// 


// application 

int linearsearch(int arr[],int n,int x){
    for (int i = 0; i < n; i++)
    {
      if(arr[i]==x) return i;
      return -1;
    }
    
}

// worst case -> traverse whole array ..takes linear time 
// time complexity O(n) (equal or less)
// it covers best ,worst and avg all