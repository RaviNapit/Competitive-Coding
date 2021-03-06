/************************************
 *	AUTHOR: 		Divyansh Gaba	*
 *	INSTITUTION: 	ASET, BIJWASAN	*
 ************************************/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main()
{
	fast;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int d= 0,c=0;
    for(int i = 0;i<n;i++)
    {
        if(c<d)
            c+=a[i];
        else
            d+=a[i];
    }
    cout<<abs(d-c)<<endl;

	return 0;

}
