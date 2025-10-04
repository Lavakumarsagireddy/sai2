#include <iostream>
using namespace std; //lava


//new line
//this is the first pattern
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    cout<<endl;
}

//this is second pattern
void pattern2(int n){
    for(int i=1;i<n;i++){
        for(int j =0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){

    for(int i=0;i<n;i++){
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

//pattern 3
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout<<"-";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";

        }
        for(int l=0;l<n-i-1;l++){
            cout<<"-";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"-";
        }
        for(int k=0;k<2*n-2*i-1;k++){
            cout<<"*";
        }
         for(int l=0;l<i;l++){
            cout<<"-";
        }
        cout<<endl;
    }
}

void pattern9(int n){  
     pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for(int i=1;i<2*n;i++){
        int stars =i;
        if (i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern11(int n){
    int start =1;
    for(int i=1;i<=n;i++){
        if (i%2!=0) start=1;
        else start =0;
        for(int j=0;j<i;j++){
            cout<<start;
            start =1-start;
        }
        cout<<endl;
    }
}


void pattern12(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int count =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<'A'+n-i;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char alpha='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<alpha;
            
        }
        alpha=alpha+1;
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        //alpha
        char alpha ='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            
            cout<<alpha;
            if(j<=breakpoint) alpha++;
            else alpha--;
        }

        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
   
    for(int i=0;i<n;i++){
        for(char ch ='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    pattern18(t);    
}