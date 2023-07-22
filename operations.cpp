#include <iostream>
 
using namespace std;
 
const int MAX = 100001;
unsigned long long int a[MAX];
int l[MAX], r[MAX], d[MAX]; 
 
int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    for(int i = 1; i <= n; i++) scanf("%lli", &a[i]); 

    for(int i = 1; i <= m; i++) scanf("%d %d %d", &l[i], &r[i], &d[i]);

    int xi, yi;
    for(int i = 1; i <= k; i++){
        scanf("%d %d", &xi, &yi);
        for(int j = xi; j <= yi; j++)for(int z = 1; z <= n; z++) if(z >= l[j] && z <= r[j]) a[z] = a[z] + d[j];   
    }
    
    for(int i = 1; i <= n; i++) printf("%lli ", a[i]);

    return 0;
}