    #include <stdio.h>

    int main() {
        int n;
        scanf("%d",&n);
        int ar[n+1];
        for(int i=0;i<n+1;i++){
            ar[i]=i;
        }
        for(int i=2;i<n+1;i++){
            if(ar[i]!=0){
                printf("%d\n",ar[i]);
                for(int j = i*i;j<n+1;j+=i){
                    ar[j]=0;
                }
            }
        }
    }
