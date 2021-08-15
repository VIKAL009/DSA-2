#include<bits/stdc++.h>
using namespace std;

// int main(){

    // string str;
    // cin>>str;
    // cout<<str;

    // string str1(5,'v');
    // cout<<str1;.

    // string str="vikal kumar";
    // cout<<str;

    //  string str;
    //  getline(cin,str);cout<<str;

    // string s1,s2;
    // s1="fam";
    // s2="ily";
    // s1.append(s2);
    // cout<<s1+s2;

    // cout<<s1[1];
    // cout<<s1;
    // s1.clear();
    // cout<<s1;
    
    // string s1="vikal";
    // string s2="vikal";
    // cout<<s2.compare(s1);

    // cout<<s1.empty();
    // s1.clear();
    // cout<<s1.empty();

    // s1.erase(2,2);
    // cout<<s1;

    // cout<<s1.find("ka")<<" "<<s1.front()<<" "<<s1.back();

    // s1.insert(2,"oo");
    // cout<<s1;

    // cout<<s1.length()<<" "<<s1.size();

    // for(auto i:s1){
    //     cout<<i<<" ";
    // }

    // for(int i=0;s1[i]!='\0';i++){
    //     cout<<s1[i];
    // }

    // cout<<s1.substr(2,2);

    // string s = "786";
    // int x = stoi(s);
    // cout<<x+2;

    // char s = '7';
    // int x = s-'0';
    // cout<<x+1;

    // int x = 10;
    // string s = to_string(10);
    // s.push_back('l');
    // cout<<s;

    // string s = "ddcbccaacbdca";
    // sort(s.begin(),s.end());
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s;

    // return 0;
// }





int main(){
    // char a;
    // a = 'a'+2;
    // cout<<a;

//    string s = "vikal";
//    for(int i=0;i<s.size();i++){
//        if(s[i]>='a' and s[i]<='z'){
//         //    s[i]-=32;
//         s[i]=s[i]-32;
//        }
//    }
//    cout<<s;
//    string s = "VIKAL";
//    for(int i=0;i<s.size();i++){
//        if(s[i]>='A' and s[i]<='Z'){
//         //    s[i]-=32;
//         s[i]=s[i]+32;
//        }
//    }
//    cout<<s;


    // string s ="ajfhksvAADFHVVnbjFGGbbjmnj";
    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s<<endl;
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // cout<<s<<endl;

    // string s ="123456789";
    // sort(s.begin(),s.end(),greater<int>());
    // cout<<s;

    string s ="aaaabbbccddddd";
    int arr[26]={0};
    // cout<<arr[23];
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }

    char ans = 'a';
    int maxF=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxF){
            maxF=arr[i];
            ans=i+'a';
        }
    }
    cout<<ans<<" "<<maxF;
}