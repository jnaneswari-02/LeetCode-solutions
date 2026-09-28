#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> prefix(n);
    vector<int>prefix_Pro(n);
    vector<int>prefix_max(n);
    vector<int>profix_min(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
        
    }
     prefix_Pro[0] = arr[0];
     for (int j = 1; j < n; j++) {
        prefix_Pro[j] = prefix_Pro[j - 1] * arr[j];
        
    }
         prefix_max[0] = arr[0];
     for (int k = 1; k< n; k++) {
        prefix_max[k] =  max(prefix_max[j-1],arr[j]);
        
    }
        cout<<"Prefix Max";
    for (int i = 0; i < n; i++)
        cout << prefix[i] << " ";    
         cout <<"\n";
       cout<<"Prefix Sum:";
    for (int i = 0; i < n; i++)
        cout << prefix[i] << " ";    
         cout <<"\n";
        cout<<"Prefix Product:";
     for (int i = 0; i < n; i++) 
        cout << prefix_Pro[i] << " ";
        cout<<"\n";
return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	 int n ;
//	  cin >> n;
//	   int a[n];
//	   for(int i=0;i<n;i++){
//	        cin >>a[i];
//	   }
//	    int  t;
//	     cin>>t;
//	      while(t--){
//	    int l=0,r=0;
//	     cin >> l >> r;
//	      int sum =0;
//	      for(int i=l;i<r;i++){
//	           sum +=a[i];
//	      }
//	           cout<<sum<<endl;
//	      }
//}

