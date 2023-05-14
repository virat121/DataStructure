//Find the only odd occuring number

#include <iostream>
using namespace std;

int findodd(int*arr,int size){
    int res=arr[0];
    for(int i=1;i<size;i++)
       res^=arr[i];
    return res;   
}
int main(){
    int arr[]{7,3,7,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<findodd(arr,5);
    return 0;
}
