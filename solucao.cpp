#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(x) x.begin(), x.end()
#define modulo(x) (x < 0 ? (x * (-1)) : x)
#define MAXN 100010
#define MAXV 1010
#define ll long long
#define ld long double
#define INF 2000000020LL
#define endl '\n'

using namespace std;
int N, P;

void desenhaParaCima(int n, int p)
{
    int spcI = 1, esp = p;
    for (int i = 1; i <= n; i++)
    {
       if(i == n)
       {
           for (int i = 0; i < spcI; i++)
           {
               cout<<" ";
           }
           cout<<"#"<<endl;           
       }
       else
       {
           for (int i = 0; i < spcI; i++)
           {
               cout<<" ";
           }
           cout<<"#";

           for (int i = 0; i < esp; i++)
           {
               cout<<" ";
           }

           cout<<"#\n";
           spcI += 1;
           esp -= 2;
       }  
    }
}

void desenhaParaBAixo(int n)
{
    int loop = n + (n - 1), spcI = n - 1, esp = 1;
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            for (int j = 0; j < spcI; j++)
            {
                cout<<" ";
            }
            cout<<"#\n";
            spcI -= 1; 
        }
        else
        {
            for (int j = 0; j < spcI; j++)
            {
                cout<<" ";
            }
            cout<<"#";
            for (int j = 0; j < esp; j++)
            {
                cout<<" ";
            }
            if(i == n) cout<<"#";
            else cout<<"#\n";
            spcI -= 1;
            esp += 2;
        }
        P = esp - 2;
    }
}

int main(int argc, char const *argv[]){
    optimize;

    cin>>N;

    if(N == 1) cout << '#' <<endl;

    else 
    {
        desenhaParaBAixo(N);
        desenhaParaCima(N - 1, P - 2);
    }   

    return 0;
}