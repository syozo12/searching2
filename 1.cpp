#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[5]={5,4,3,2,1};
    int x;
    cout<<"enter the element to be searched";
    cin>>x;
    int lo=0;
    int hi=4;
    bool flag=false;
    while(lo<=hi){
    int mid=(lo+hi)/2;
        if(a[mid]==x){
           cout<<"element found at index"<<mid;
           flag=true;
            break;
        }
        else if(a[mid]>x){
            
            lo=mid+1;
               
        }
        else  hi=mid-1;
        
    }
    if(!flag) cout<<"element not present";
    return 0;
}
