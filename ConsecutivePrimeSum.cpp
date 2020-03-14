#include<iostream>
#include<vector>
#include<map>
#define MAX 1000000

using namespace std;
std::map<int,bool>primeDict;

void getDic();
void sieve();
void getSolution(long long);

int main(){
    int t;std::cin>>t; //testcases;
    getDic();
    sieve();

    while (t!=0)
    {

        long long n;std::cin>>n;
        getSolution(n);

        t--;

    }
    
    
    
    return 0;

}

void getDic(){
    int i=0;
    while(i<=MAX){
        primeDict[i]=true;
        i++;
    }
    
}

void sieve(){
    long long i,j;
    primeDict[0]=false;
    primeDict[1]=false;
    i=2;

    while(i<=MAX){
        j=2;
        while(i*j<=MAX){
            if(primeDict[i*j]==true){
                primeDict[i*j]=false;
            }
            ++j;

        }
        i++;
    }

    std::cout<<"Done";
}

void getSolution(long long n){
    long long s=0;
    long long I=0;
    int flag=0;
    vector<long long>primesInRange;
    
    while(s<n){
        if(primeDict[I]==true)
        { primesInRange.push_back(I); s+=I; }
        I++;
    }
    if(s>=n){
        s-=primesInRange[primesInRange.size()-1];
        primesInRange.pop_back();

    }
    vector<long long> :: iterator i;
    for(i=primesInRange.begin();i<primesInRange.end();i++){
        std::cout<<primesInRange[i-primesInRange.begin()]<<"\t";
    }

    std::cout<<"\n"<<s << "calcutae karo aab\n";

    int ele=0;
    while(ele<primesInRange.size()){
        if(primeDict[s]==1){
                std::cout<<s<<"Ans mila\n";
                break;
        }
         //  std::cout<<s<<"\t yaha hu";
             
        s=s-primesInRange[ele];
        ele++;
    }
}


