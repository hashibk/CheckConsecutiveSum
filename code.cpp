#include <iostream>
using namespace std;

void calSpecial(int val, int &counter, int &sum){
    
    if (sum == val) {
        
        cout<<"Special number"<<endl;
        
        sum=0;
        counter=1;
        
        while (sum<val){
            cout<<counter<<" + ";
            sum+=counter;
            counter++;
        }
        
        cout<<endl;
        
        return;
        
    }
    
    
    if (sum > val){
        cout << "Not a special number. " << endl;
        return;
    }
    
    sum += counter;
    ++counter;
    
    calSpecial(val, counter, sum);
    
}

int main(){
    
    int x;
    cout<<"Enter Number= "<<endl;
    cin>>x;
    
    int counter=1;
    int sum=0;
    
    calSpecial(x,counter,sum);
    
    return 0;
}