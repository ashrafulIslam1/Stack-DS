#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

int stackk[SIZE];
int top=-1;

void push(int element);
int pop();

void push(int element)
{
    if(top>=SIZE)
    {
        cout<<"SIZE of top is greater than stackk SIZE , so stackk overflow ."<<endl;
        return ;
    }
    else
    {
        top++;
        stackk[top] = element;
        cout<<"Data pushed in stackk is successful !"<<endl<<endl<<endl;
    }
}
int pop()
{
    if(top<0)
    {
        cout<<"stackk is empty !"<<endl;
        return INT_MIN;
    }
    else
    {
        return stackk[top--];
    }
}

int main()
{
    int choice , data;
    while(1)
    {
        cout<<"stackk implementation !"<<endl<<endl;
        cout<<"1. Push elements ."<<endl;
        cout<<"2. Pop elements ."<<endl;
        cout<<"3. SIZE of stackk ."<<endl;
        cout<<"4. Exit ."<<endl;

        cout<<endl<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter data for push into stackk : ";
                cin>>data;
                push(data);
                break;
            case 2:
                data=pop();
                if(data != INT_MIN)
                {
                    cout<<"Pop data is : "<<data<<endl<<endl<<endl;
                }
                break;
            case 3:
                cout<<"SIZE of the stackk is : "<< top+1<<endl<<endl<<endl;
                break;
            case 4:
                cout<<"Good bye ,Thanks !"<<endl<<endl<<endl;
                break;
            default:
                cout<<"Invalid choice !"<<endl<<endl<<endl;

        }
    }
    return 0;
}
