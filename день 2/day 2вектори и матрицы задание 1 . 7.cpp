#include <set>
#include <iostream>
 
 
template<size_t N, size_t M>
int (&merge(  const int (&a)[N], const int (&b)[M] )   )[N+M]
{
    ::std::multiset<int> s(a, a+N);
    s.insert(b, b+M);
    
    static int c[N+M];
    
    size_t n=0;
    for(const auto& e: s)
        c[n] = e,
        ++n;
   
    return c;
}
    
 
template<size_t N> 
::std::ostream& operator<< (::std::ostream& ss, const int (&ar)[N] )
{
    for(const auto& e: ar)//цикл по всему масису
        ss<< e <<", ";
    return ss;
}
    
int main()
{
    std::cout << "Hello, world!\n";
    
    const int a[]= {1,2,3,4,5};
    const int b[]= {5,2,7,9};
    
    ::std::cout<< "array a: { "<< a <<"};\n";
    ::std::cout<< "array b: { "<< b <<"};\n";
    
    const auto& r = merge(a,b);
    
    ::std::cout<< "result : { "<< r <<"};\n";
}
