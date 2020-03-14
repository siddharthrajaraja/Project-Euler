#include<algorithm>
#include<iostream>
#include<math.h>

using namespace std;

int getCount(long long n){
    int c=0;
        while(n%10==0){
            n=n/10;
            c++;
        }
        return c;
}



void fact(long long n){
    long long pr=1;
    long long i=1;

    while(i<=n){
            pr=pr*i;
            i++;
            int count=getCount(pr);
            pr=pr%(long long)pow(10,5+count);
            pr=pr/(long long)pow(10,count);
            std::cout<<"\nNumber is : \t"<<i<<"\tFactorial is : "<<pr << "\tCount :"<<count;     
              
    }
    //std::cout<<pr;


}

int main(){
    long long n;std::cin>>n;
    fact(n);


    return 0;

}
