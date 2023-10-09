#include <iostream>
using namespace std;
string encode(string s, int j){
    int i = 0;
    while(i<s.length()){
        if(i == 0){
            i+=j;
            //cout<<i<<endl;
            int temp = (int)s[i];
            temp+=2;
            //cout<<s
            s[i] = (char)temp;
        }else{
            //s[i+3]
            i+=(j+1);
            //cout<<i<<endl;
            int temp = (int)s[i];
            temp+=2;
            s[i] = (char)temp;
        }
    }
    return s;
}
int main(){
    string str = "I am a student";
    cout<<encode(str, 2);
}


