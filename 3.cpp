#include<iostream>
#include<vector>
using namespace std;
int search(vector<vector<int>>&v,int x){
    int n=v.size();
    int m=v[0].size();
    int lo=0;
    int hi=n*m-1;
    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        int r=mid/m;
        int c=mid%m;
        if(v[r][c]==x){
            return mid;
            break;
        }
        else if(v[r][c]>x) hi=mid-1;
        else lo=mid+1;
        
        //1 3 5 7
        //10 11 16 20
        //23 30 34 60

        
    }

}
int main(){
    int x;
    cout<<"enetr the target";
    cin>>x;
    int m,n;
    cout<<"enetr the number of rows";
    cin>>m;
    cout<<"enetr the number of columns";
    cin>>n;
    vector<vector<int>> v(m, vector<int>(n));;
   for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    int idx=search(v,x);
    cout<<"element is present at"<<idx/m<<","<<idx%m;
}