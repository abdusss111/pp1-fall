#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;                           	 
    int a[n][n];
    int length=n,b=1,c=0,i;
    while ( b<=n*n ){
   	    for ( i=c; i<length; i++ ){
   		    a[c][i]=b++;
   	}
   	    for( i=c+1; i<length; i++ ){
   		    a[i][length-1]=b++;
   	}
   	    for( i=length-2;i>=c;i--){
   		    a[length-1][i]=b++;
   	}
   	    for( i=length-2; i>c; i-- ){
   		    a[i][c]=b++;
   	}
   	    c++;
        length=length-1; 
    }
    if(!n%2){
   	    a[(n+1)/2][(n+1)/2]=n*n;
    }
    for(int i=0;i<n;i++){
   	    for(int j=0;j<n;j++){
   		    cout<<a[i][j]<<" ";
   	 }
   	 cout<<endl;
    }
    return 0;
}