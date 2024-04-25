#include<iostream>
#include<vector>
using namespace std;
bool bs(vector<int>&a,int x,int lo,int hi){
    bool flag=false;
    while(lo<=hi){
    int mid=(lo+hi)/2;
        if(a[mid]==x){
           cout<<"element found at index"<<mid;
           flag=true;
            return true;
        }
        else if(a[mid]>x){
            
            lo=mid+1;
               
        }
        else  hi=mid-1;
        
    }
    if(!flag) 
    return false;
}
int main(){
    vector<int> a={1,2,3,4,5};
    int target;
    cout<<"enter the element to be searched";
    cin>>target;
    int x=2;
    int lo=0;
    int hi=2;
    bool flag=false;
    while(lo<=hi){
    int mid=(lo+hi)/2;
        if(a[mid]==target){
           cout<<"element found at index"<<mid;
           flag=true;
            break;
        }
        else if(a[mid]<target){
            
            lo=mid+1;
            hi=lo+x;
            x*=2;
               
        }
        else  {
            hi=mid-1;
            flag=bs(a,target,lo,hi);
            break;
        }
        
    }
    if(!flag) cout<<"element not present";
    return 0;
}
