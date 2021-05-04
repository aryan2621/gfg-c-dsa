// omega notation or big omega
// fn =   Ω(g(n)) iff there exist a posiive constants c and n. such that 0<=c(g(n))<=fn for all n>=n.

// f(n)=2n+5;
// |    /
// |   /  /
// |  /  /
// | /  /g(n)=n
// |/  /
// |  /
// | /
// |/_______________________
// n->

// omega is just opposite of big o
// omega is used to provide lower bound;

//Example fn=2n+3;
// we can take higest grwoing term constants and write it as Ω
//fn=2n+3 = Ω(n);

// example 2n^3+ 3n+ 6 = Ω(n^2);

// mathmetical method to prove this.
// we take constant of leading term and make - 1and make it equal to c;

// fn =2n+3 
// c=1
// cgn=n
// and simply put  Ω

// n<=2n+3;
// n.=0 after which the above equation will always be correct


// { n/4 , n/2 ,2n ,3n, 2n+3 ,n^2 ,2n^2 .....n^n}  Ω(n)
// if we say  Ω(n) it covers all functions whose order of growth is linear or greater than linear.

// if fn= Ω(g(n))
// then g(n) =O(f(n))

// it is useful in case of lower bound on time compleity.

