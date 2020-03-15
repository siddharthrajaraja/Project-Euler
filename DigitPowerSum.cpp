#include<iostream>
#include<vector>
#include<map>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>

long long getDigSum(long long);


using namespace std;


int main(){
    std::vector<long long>arr;

    for(int i=0;i<=70;i++){
        for(int j=0;j<=20;j++){
            if((long long)pow(i,j)>10 && getDigSum((long long)pow(i,j))==i)    

                arr.push_back((long long)pow(i,j));
        }
    }    
    std::sort(arr.begin(),arr.end());
    //std::cout<<arr[30];
    for(int i=0;i<arr.size();i++){
        std::cout<<"\n"<<(i+1) << ": " <<arr[i];
    }

    return 0;
}


long long getDigSum(long long n){
    long long s=0;
    while(n!=0){
            s+=n%10;
            n=n/10;

    }   
    return s;

}
