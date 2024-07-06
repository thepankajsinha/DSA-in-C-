#include <iostream>
using namespace std;

void missingAndRepeatingElement(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       arr[i]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }

    int ans[2];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]/n==2)
        {
            ans[0]=i+1;
        }
        else if (arr[i]/n==0)
        {
            ans[1]=i+1;
        }
        
        
    }

    cout<<"Repeating element is: "<<ans[0]<<endl;
    cout<<"Missing element is: "<<ans[1];
        
}

int main(){

    int n;
    cin>>n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    missingAndRepeatingElement(arr, n);
    

}