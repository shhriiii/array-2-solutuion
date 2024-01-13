#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of row : ";
    cin>>m;
    int n;

    cout<<"enter the number of col : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1) cout<<arr[i][j]<<" ";
            else{
                cout<<" ";
            }

            
        }
        cout<<endl;





}
}