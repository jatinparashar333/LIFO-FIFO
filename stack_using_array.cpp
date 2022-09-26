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
class StackArr{
    int *arr;
    int top;
    public:
        StackArr(){
            arr=new int[n];
            top=-1;
        }
        void push(int x){
            if(top==n-1){
                cout<<"Stack Overflow\n";
                return;
            }
            arr[++top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"No Element to Pop\n";
            }
            top--;
        }
        int Top(){
            if(top==-1){
                cout<<"No Element in Stack\n";
                return -1;
            }
            return arr[top];
        }
        bool isFull(){
            if(top==n-1){
                return 1;
            }
            return 0;
        }
        bool isEmpty(){
            if(top==-1){
                return 1;
            }
            return 0;
        }
        void display(){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
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
    StackArr s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.display();
    return 0;
}
