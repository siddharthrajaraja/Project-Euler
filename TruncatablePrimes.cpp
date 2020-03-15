//0 : True and 1 : False
#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
#define MAX 1000000
using namespace std;

int primeDict[MAX]={};

std::vector<int>primesArray;

void sieve();
void printVector();
bool truncate(int,int);
int getDigits(int);


int main(){
    int c=11;

    sieve();
    //printVector();
    std::cout<<"\n";
    //long long t;std::cin>>t;
    int s=0;
    int i=0;
    while(c!=0){
        int dig=getDigits(primesArray[i]);
        if(primesArray[i]>10 &&  truncate(primesArray[i],dig)==true){
            std::cout<<primesArray[i]<<"\t";
            s=s+primesArray[i];
            c--;
        }
        i++;
    }
    
    
    std::cout<<"\nSum is: "<<s;


    return 0;
}

void sieve(){
    int i,j;
    primeDict[0]=1;
    primeDict[1]=1;
    i=2;

    while(i<=MAX){
        j=2;
        if(primeDict[i]==0){
            primesArray.push_back(i);
                while(i*j<=MAX){
                    if(primeDict[i*j]==0){
                        primeDict[i*j]=1;
                    }
                    ++j;
                }
        }
        
        i++;
    }


    std::cout<<"Done";
}

void printVector(){
    std::cout<<"\nPrimes Array: ";
    int i=0;
    while(i<primesArray.size()){
        std::cout<<primesArray[i]<<"\t";
        ++i;
    }

}

int getDigits(int n){
    int c=0;
    while(n!=0){
        n=n/10;
        c++;

    }
    return c;
}

bool truncate(int n,int dig){

    while(dig!=0){
        std::cout<< "Left part :"<<n%(int)pow(10,dig)<<"\tRight part : "<<n/(int)pow(10,dig)<<"\n";
        if(n/(int)pow(10,dig)!=0){
            if( primeDict[n/(int)pow(10,dig)]==1)return false;

        }
        if(n%(int)pow(10,dig)!=0 ){
            if(primeDict[n%(int)pow(10,dig)]==1)return false;

        }
        
        
        dig--;
    }
    return true;

}
