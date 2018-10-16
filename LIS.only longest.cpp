#include<bits/stdc++.h>
using namespace std;
int main(){

int a[]={10,20,30,1,29,40,30,5,1};
int n=sizeof(a)/sizeof(a[0]);
int lis[n];
for(int i=0;i<n;i++){
    lis[i]=1;
}
int maxx=0;
for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if((a[i]>a[j])&&(lis[j]+1>lis[i])){
                lis[i]=lis[j]+1;
                if(maxx<lis[i]){
                    maxx=lis[i];
                }
            }
        }



}

  cout<<"length of lis:"<<maxx<<endl;


}
