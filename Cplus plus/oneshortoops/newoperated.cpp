#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int *dynamicarray=new int(n);
    cout<<"Enter "<<n<<" integer"<<endl;
    if(dynamicarray==nullptr){
        cout<<"Memory allocation faild"<<endl;
        return 1;
    }
    for(int i=0;i<n;i++){
        cin>>dynamicarray[i];
    }
    cout<<"Element of array are:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<dynamicarray[i]<<" ";
    }
    delete[] dynamicarray;

}
