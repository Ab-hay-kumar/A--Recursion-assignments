
#include <iostream>
using namespace std;

int subsequence(string s, string output[] ){
    if(s.empty()){
        output[0] = " ";
        return 1;
    }
    string smallinput = s.substr(1);
    int size = subsequence(smallinput, output );
    for(int i = 0; i<size; i++){
        output[size+i] = s[0] + output[i];
    }
    return 2*size;

}

int main(){
    string s;
    s = "abhay";
    string output[2000];
    int size = subsequence(s,output);
    int i = 0;
    cout << size << " ";
    while(i<size){
        cout << output[i] << " ";
        i++;
    }
    
    
}
