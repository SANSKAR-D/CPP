#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int N, int M, int maxAlloted){
    int student = 1, pages = 0;
    for(int i = 0; i < arr.size(); i++){
        if(pages + arr[i]<= maxAlloted) pages+= arr[i];
        else{
            student++;
            pages = arr[i];
        }
    }
    return student <= M ? true:false;
}

int minAllocation(vector<int> &arr,int N,int M){
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
    vector<int> arr={15,17,20};
    int N = 3;
    int M = 2;
    cout << minAllocation(arr,N,M) <<endl;
    return 0;
}