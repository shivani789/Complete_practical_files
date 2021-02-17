#include<bits/stdc++.h>
using namespace std;

bool isOperator(char ch){

    if(ch == '+' or ch == '-' or ch == '*' or ch == '/' or ch == '^')
        return true;
    return false;
}

int getPrecedence(char ch){
    if(ch == '^')
        return 3;
    else if(ch == '*' or ch == '/')
        return 2;
    else if(ch == '+' or ch == '-')
        return 1;
}

void displayStack(stack<char> st){
    vector<char> v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i];
    }
}
int main()
{
 stack<char> st;
 string s;
 cin>>s;
 st.push('(');
 s.push_back(')');

 string postfix;
 cout<<"\t\t"<<"Character";

 for(int i=0; i<s.size(); i++){

    if(s[i] == '('){
        st.push(s[i]);
    }
    else if(isOperator(s[i])){
        while(!st.empty() and st.top()!='(' and getPrecedence(st.top())>=getPrecedence(s[i])){
            postfix.push_back(st.top());
            st.pop();
        }
        st.push(s[i]);
    }
    else if(s[i] == ')'){
        while(!st.empty() and st.top() != '('){
                postfix.push_back(st.top());
                st.pop();
              }
        if(!st.empty())
            st.pop();
    }
    else{
        postfix.push_back(s[i]);
    }
    cout<<"\t\t"<<s[i]<<"\t\t\t\t";
    displayStack(st);
    cout<<"\t\t\t\t";
    cout<<postfix<<endl;
 }
 cout<<endl<<"The Postfix of given Infix expression is: "<<postfix<<endl<<endl;
 return 0;
}
