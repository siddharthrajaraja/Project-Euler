#include<vector>
#include<iostream>
#include<vector>
#define MAX 1001
using namespace std;

std::vector<long long>arr;

void getArray();
void printArray();

void getSum(int);

int main(){
    getArray();
    //printArray();
    getSum(1000);
    return 0;
}

void getArray(){
    arr.push_back(1);
    int r=1;
    
    while(r<=MAX){
        for(int i=0;i<=3;i++){
            arr.push_back(arr[arr.size()-1]+2*r);
        }
        r++;
    }
    

}

void printArray(){
    long long s=0;
    for(int i=0;i<arr.size();i++){
        s=s+arr[i];
        std::cout<<arr[i]<<"\t";
    }
    std::cout<<"\n";
    std::cout<<s<<"\n"<<arr.size();

}

void getSum(int n){
    if(n==1){std::cout<<arr[0]<<"\n";return;}
    int i=1;
    while(n>0){
        i=i+4;
        n=n-2;
    }
    long long s=0;
    for(int j=0;j<i;j++)s+=arr[j];
    std::cout<<s<<"\n";

}
