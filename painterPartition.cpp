#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int N, int M, int maxTime){
    int painter = 1,time=0;
    for(int i =0; i < arr.size(); i++){
        if(time + arr[i]<=maxTime) time+=arr[i];
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= M ? true:false;
}

int minTime(vector<int> &arr,int N,int M){
    if(M>N) return -1;
    int sum = 0;
    for(int val: arr) sum+=val;
    int st = 0,end=sum;
    int ans = -1;
    while (st <= end){
        int mid = st + (end-st)/2;
        if(isValid(arr,N,M,mid)){
            ans = mid;
            end = mid-1;
        }else st = mid+1;
    }
    return ans;

}

int main(){
    vector<int> length={40,30,10,20};
    int N = 4;
    int M = 2;
    cout << minTime(length,N,M) <<endl;
    return 0;
}