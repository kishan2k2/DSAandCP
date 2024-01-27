#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool fun(string s, int k){
    unordered_map<char, int> charCount;
    // Count occurrences of each character in the string
    for (char c : s) {
        charCount[c]++;
    }

    // Check if each character occurs at least k times
    for (int i = 0; i < k; i++) {
        if (charCount['a' + i] < k) {
            char temp = 'a' + i;
            cout<<"NO"<<endl;
            for(int i=0; i<k; i++){
                cout<<temp;
            }
            cout<<endl;
            return false;
        }
    }
    return true;
}
void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    string t = s;
    sort(t.begin(), t.end());
    if(!fun(t, m))
        return ;
    unordered_map<char, int> charFrequency;
    for (int i = s.size() - 1; i >= 0; i--) {
        char currentChar = s[i];
        // cout<<"inside function";
        // Increment the frequency of the current character
        charFrequency[currentChar]++;

        // Check for each character among the first k alphabets
        for (char checkChar = 'a'; checkChar < 'a' + m; checkChar++) {
            // Skip the current character
            if (checkChar == currentChar) {
                continue;
            }
            string temp = "";
            // Check if the frequency of the remaining (k-1) characters is greater than or equal to temp-1
            if(charFrequency[currentChar]>k)
                continue;
            if (charFrequency[checkChar] < charFrequency[currentChar] - 1 - k+m) {
                // cout<<"character is "<<checkChar<<endl;
                cout<<"NO"<<endl;
                temp += currentChar;
                for(int i=0; i<charFrequency[currentChar] && i<m-1; i++)
                    temp += checkChar;
                for(int i = temp.size(); i<m; i++)
                    temp = currentChar + temp;
                cout<<temp<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	    // cout<<endl;
	}
	return 0;
}
