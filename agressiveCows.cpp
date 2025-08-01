#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

bool isPossible(vector<int> &arr,int N,int C,int minDistance){
    int cows = 1,lastLocated=arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]-lastLocated >= minDistance){
            cows++;
            lastLocated = arr[i];
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}



int maxDistance(vector<int> &arr,int N,int C){
    sort(arr.begin(),arr.end());
    int st = 1,end = arr[arr.size()-1]-arr[0];
    int ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isPossible(arr,N,C,mid)){
            ans = mid;
            st = mid+1;
        }else end = mid-1;
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,8,4,9};
    int C = 3, N = 5;
    cout << maxDistance(arr,N,C) <<endl;
    return 0;
}