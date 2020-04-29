#include <iostream>
using namespace std;
int main(void){
    string S; cin>>S;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<abc.length(); i++){
        if(S.find(S[i]) == string::npos) cout << "-1" << " ";
        else cout << S.find(abc[i]) << " ";
    }
    return 0;
}