/*
#include<bits/stdc++.h>
using namespace std;

list<int> l;

void insert( int x){ l.push_back(x) ;}

void print(){
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;
}

void replace(int x , vector<int> &seq){
    auto it = find(l.begin(),l.end() , x);
    if(it == l.end()) 
        return;

    it = l.erase( it);
    l.insert(it,seq.begin() , seq.end());
}

int main(){

    insert(20);
    insert(10);
    insert(30);
    insert(5);
    insert(10);
    print();
    vector<int> seq ={1,2,3,4};
    replace(10,seq);
    print();

}


*/



// 
//       {
//             "type": "cppbuild",
//             "label": "C/C++: gcc.exe build active file",
//             "command": "C:\\MinGW\\bin\\gcc.exe",
//             "args": [
//                 "-fdiagnostics-color=always",
//                 "-g",
//                 "${file}",
//                 "-o",
//                 "${fileDirname}\\${fileBasenameNoExtension}.exe"
//             ],
//             "options": {
//                 "cwd": "${fileDirname}"
//             },
//             "problemMatcher": [
//                 "$gcc"
//             ],
//             "group": {
//                 "kind": "build",
//                 "isDefault": true
//             },
//             "detail": "Task generated by Debugger."
//    





//Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// //User function Template for C++


// // list: remove from front of list provided
// void removeFromFront(forward_list<int> &list)
// {
//     // your code here
//     list.pop_front();
// }

// // list: remove elements after given iteraring position
// // x: is the iterating position after which you have to remove
// //    from list
// void removeAfter(forward_list<int> &list, int X)
// {
//     // your code here
//     auto it = list.begin();
//     X--;
//     while(X--){
//         it++;
//     }
//     list.erase_after(it);
// }

// // list: remove elements from list from range given
// // start: starting position of the range
// // end: end position of the range
// void removeFromInRange(forward_list<int> &list, int start, int end)
// {
//     // your code here
//     auto it= list.begin();
//     auto it2 = list.begin();
//     start--;
//     end--;
//     while(start--){
//         it++;
//     }
//     while(end--){
//         it2++;
//     }
//     list.erase_after(it,it2);
// }

// // list: remove all elements from the list
// void removeAll(forward_list<int> &list)
// {
//     // your code here
//     list.clear();
// }

// // { Driver Code Starts.
// int main()
// {
//     int t;
//     cin>>t;
    
//     while(t--)
//     {
//         int N, val;
//         cin>>N;
        
//         forward_list<int> list;
        
//         for(int i = 1; i <= N; i++)
//         {
//             cin>>val;
//             list.push_front(val);
//         }
        
//         int typeQuery;
//         cin>> typeQuery;
        
//         if(typeQuery == 1)
//         {
//             removeFromFront(list);
            
//         }else if(typeQuery == 2)
//         {
//             int x;
//             cin>>x;
//             removeAfter(list, x);
//         }else if(typeQuery == 3)
//         {
//             int start, end;
//             cin>>start>>end;
//             removeFromInRange(list, start, end);
//         }
//         else {
//             removeAll(list);
//         }
       
        
//         if(list.empty())
//             cout << "Empty" <<endl;
//         else
//         {
//             for(int &temp : list)
//             cout << temp << " ";
//             cout <<endl;
            
//         }
        
//     }
// }

  // } Driver Code Ends





#include<bits/stdc++.h>

using namespace std;

int chengal(vector < vector<int> > v){


    int n=v.size();
    int m= v[0].size();

    bool row = false , col = false;

    //same fanda 0th row and col walaa for check 
    for(int i=0 ; i<n ; i++) if(v[i][0] == 0) col=true;
    for(int j=0 ; j<m ; j++)if(v[0][j] == 0 ) row =true;

    for(int i=1 ; i<n ; i++){
        for(int j=1 ; j<m ; j++){
            if(v[i][j] == 0){
                v[0][j] =0;
                v[i][0] =0;
            }
        }
    }
//1st r and c chod ke koi agar 0 hai tho 0th r pr 0 dalo 
//same for c agar 1st r and c chod ke koi bich me 0 hai 
//tho 1st pe daloo usko...
    for(int i=1 ; i<n ; i++){
        if(v[i][0] == 0){
            for(int j=1 ; j<m ; j++){
                v[i][j] =0;
            }
        }
    }
   

    for(int j=1; j<m ; j++){
        if(v[0][j] == 0){
            for(int i=1 ; i<n ; i++){
                v[i][j] =0;
            }
        }
    }

    // agar 0th row pe koi 0 hai tho wo row 0 karooo
    if(row == true){
        for(int j=0 ; j<m ; j++){
            v[0][j]=0;
        }
    }
    //agar 0th col pe koi 0 hai tho col 0 karo
    if(col == true){
        for(int i=0 ; i<n; i++){
            v[i][0] = 0;
        }
    }

    // print(v, n,m);
    for(int i=0 ; i< n ; i++){
        for(int j=0; j< m ;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void print(vector<vector<int>> v , int n, int m){
    for(int i=0 ; i< n ; i++){
        for(int j=0; j< m ;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int> > v;

    for(int i=0; i< n ; i++){

        vector<int>temp;
        for(int j=0 ; j<m; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
        
    // for(int i=0 ; i< n ; i++){
    //     for(int j=0; j< m ;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // chengal(v);
    int r,c,diff,count;

    for( r=1 ; r<= 5 ; r++){
        diff = 4;
        count = r;

        for(c=1 ; c<=r ;c++){
            cout<<c<<" ";
            count = count + diff;
            diff--;
        }
        cout<<endl;
    }
}




//     int n;
//     cin>>n;
    
//     int a[n][n];

//     for(int i=0 ; i<n ; i++){
//         for(int j =0 ; j< n ;j++){
//             cin>>a[i][j];
//         }
//     }

//     for(int i=0 ; i< n ; i++){
//         for(int j=0 ; j< n ; j++){
//             if(a[i][j] == 0){
//                 // change(i, j, n, a);
//                 for(int k=0 ; k<n ; k++){
//                     a[k][j] =0;
//                      // a[i][k] =a[k][j];
//                 }
//             }
//         }
//     }


//     for(int i=0 ; i<n ; i++){
//         for(int j =0 ; j< n ;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int change(int i,int j , int n, int a[]){

// }








