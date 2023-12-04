#include <bits/stdc++.h>
using namespace std;

void printBinary(int a){
    for(int i=31;i>=0;i--){
        cout<<((a>>i)&1);
    }
    cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n][n];
    // cout<<"HELLO"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int>v;
    for(int i=0;i<n;i++){
        //cout<<"HELLO"<<endl;
        int ans=(1<<30)-1;
        // cout<<ans<<endl;
        for(int j=0;j<n;j++){
            if(i>j) ans=(ans)&(arr[j][i]);
        }
        for(int j=0;j<n;j++){
            if(j>i) ans=(ans)&(arr[i][j]);
        }
        // cout<<ans<<endl;
    v.push_back(ans);
    }
    int flag=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        int f=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]!=0){
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }

    if(f==0){
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    else cout<<"NO"<<endl;
    } 
    else {
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }


        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;


  }

}