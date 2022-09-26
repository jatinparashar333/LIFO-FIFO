#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define jatin(x) int x;cin>>x;while(x--)
/*
void printer(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}
int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
*/
#define n 100
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            next=NULL;
        }
};
class StackLL{
    Node* top=NULL;
    public:
        void push(int x){
            Node* temp=new Node(x);
            temp->next=top;
            top=temp;
        }
        void pop(){
            if(!top){
                cout<<"Stack is Empty\n";
                return;
            }
            Node* temp=top;
            top=top->next;
            delete(temp);
        }
        int Top(){
            if(!top){
                return -1;
            }
            return top->data;
        }
        bool isempty(){
            if(!top){
                return true;
            }
            return false;
        }
        void print(){
            Node* tmp=top;
            while(!tmp){
                cout<<tmp->data<<" ";
                tmp=tmp->next;
            }
        }
};
int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    #endif 
    /* stack implementation 
        1.using array
        2.using linked list
    */
    StackLL s;
    s.push(24);
    s.Top();
    s.push(6);
    s.push(7);
    s.print();
    return 0;
}
