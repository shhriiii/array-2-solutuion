#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enetr the row : ";
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
    
    //trsnping here but sir also did this with the help of swap funcn
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //rotating anticlockwise
    for(int c=0;c<n;c++){
        //reverse the cth col
        int i=0;
        int j= m-1;
        while(i<j){
            swap(arr[i][c],arr[j][c]);
            i++;
            j--;

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}