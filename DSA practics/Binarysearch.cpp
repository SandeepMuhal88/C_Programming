#include<iostream>
using namespace std;
int main(){
    int i,E,m,l;  //L= lower element of array index 0
    // m=midle element of array , E = end index of array

    int n,search;
    cout<<"Enter the size of array:-"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:- "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter that number you want to search :- "<<endl;
    cin>>search;
    l=0;
    E=n-1;
    while(l<E){
        m=(l+E)/2;
        if(arr[m]==search){
            cout<<"Number is found::!!"<<endl;
            break;
        }
        else if(arr[m]>search){
            E=m-1;
        }
        else if(arr[m]<search){
            l=m+1;
        }

    }
    if(l>E){
        cout<<"Insert value is not found__";
    }


}