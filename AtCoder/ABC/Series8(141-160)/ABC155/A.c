#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <complex.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

#define DBG_INT(arg) fprintf(stderr,"*DEBUG* " #arg "...%d\n",arg)
#define DBG_DOUBLE(arg) fprintf(stderr,"*DEBUG* " #arg "...%f\n",arg)
#define DBG_CHAR(arg) fprintf(stderr,"*DEBUG* " #arg "...%c\n",arg)
#define DBG_STRING(arg) fprintf(stderr,"*DEBUG* " #arg "...%s\n",arg)
#define mal(type,size)  malloc(size*sizeof(type))
#define rep(i,N)    for(int i=0;i<N;i++)
#define rep2(i,N,M) for(int i=N;i<M;i++)

typedef long long ll;

signed main(void){
    int N;
    scanf("%d",&N);
    int *A;
    A=mal(int,N);
    rep(i,N){
        scanf("%d",&A[i]);
    }
    int cnt=0;
    rep(i,N){
        if(A[i]%2==0){
            if(A[i]%3==0||A[i]%5==0){
            }else{
                puts("DENIED");
                return 0;
            }
        }
    }
    puts("APPROVED");
    return 0;
}