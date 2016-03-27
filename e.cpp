#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int k,l;
int i,j;
int start,ch,cv,r;
long long n,m,q,p,maxx,ansi,t,w,e;
long long ans,fl ;
char a[123456];

int main(){	
 	cin >> n;
 	l = n;
 	while(l){
 		
	}
 	for(i = 0; i < n ;i++){
 		ans = n&i;
 		if(ans != 0){
 			ch++;
 		}
	 }
	 cout << ch;
}
/*
long long  sum;
#include <fstream>
#include <algorithm>
using namespace std;
int i, n,j,k, a[10000];
int main (){
    //std::ifstream in("perm.in");
    ofstream out("perm.out");
    cin >> n >> k;
    for (i = 1; i < 1000; i++){
 		//std::cin >> a[i];       
        a[i] = rand()%100;
       // out << a[i] << " ";
    }
    out << std::endl;
    while (std::next_permutation(a+1, a+n+1)){
    	j++;
         for (i = 1; i < n+1; i++)
          	out << a[i] << " ";
          out << std::endl; 
    }
    cout << j;
    return 0;
}*/

/*
	s = 1;
	for(i = 1; i <= n; i++) d[i] = inf;
    d[s]=0;
    for(i = 1; i <= n; i++){
        v = 0;
        for(j = 1; j <= n; j++)
            if(!used[j] && (v == 0 || d[j] < d[v]))
                v = j;
        used[v] = 1;
        for(int j = 1;j <= n; j++)
            if(a[v][j] != -1 && d[v] + a[v][j] < d[j])
                d[j] = d[v] + a[v][j];
    }

 if(d[n] != inf) cout << d[n] << " ";
 return 0;
}
*/

