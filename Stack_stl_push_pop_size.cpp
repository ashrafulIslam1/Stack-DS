#include<bits/stdc++.h>
using namespace std;

//Stack follow last in first out (LIFO)

int main()
{
    int n;
    cout<<"Enter stack size : ";
    cin>>n;

    stack<int>st;

    cout<<endl<<"Enter elements for stack : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }


    cout<<endl<<"Top value of stack before pop : "<<st.top()<<endl;

    cout<<"Size of stack before pop : "<<st.size()<<endl;

    st.pop(); // here I remove the last element from stack.

    cout<<endl<<"Top value of stuck after pop : "<<st.top()<<endl;

    cout<<"Size of stuck after pop : "<<st.size()<<endl<<endl;

    cout<<"Check stack is empty or not: "<<st.empty()<<endl; // here it will print boolean, O means not empty and 1 means empty

    /*cout<<endl<<"Stack after pop : "<<endl;
    for(int i=0; i<st.size(); i++)
    {
        cout<<st[i]<<" ";
    }*/

    return 0;
}
