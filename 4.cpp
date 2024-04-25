#include<iostream>
#include<vector>
using namespace std;
bool search(int a[],int n,int x){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
    int mid=(lo+hi)/2; 
        if(a[mid]==x){
           return true;
        }
        else if(a[mid]==a[lo]&&a[mid]==a[hi]){//compress the array
            lo++;
            hi--;
        }
        else if(a[mid]>a[hi]){//mid to hi sorted 
            if(x>a[mid]&&x<=a[hi])
               lo=mid+1;
            else hi=mid-1; 
        }
        else{//lo to mid sorted
            if(x>=a[lo]&&x<=a[mid]){
                hi=mid-1;
            }
            else lo=mid+1;
        }
    }
    return false;
    
}
int main(){
    int a[7] = {2,5,6,0,0,1,2};
    int x;
    cout<<"enfgter the element to be searched";
    cin>>x;
    if(search(a,7,x)) cout<<"true";
    
}