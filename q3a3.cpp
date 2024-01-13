#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enetr the number  of row : ";
    cin>>m; 
    int n;
    cout<<"enter the numbr of col : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    
    }
    
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j];
            }
        }
        else{
        for(int i=0;i<m;i++){
            cout<<arr[i][j];
            
        }
    }
 }
 


}