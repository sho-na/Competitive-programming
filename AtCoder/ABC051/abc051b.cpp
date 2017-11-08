#include <cstdio>

int main(){
    int K,S;
    scanf("%d%d",&K,&S);
    
    int ans;
    //int ans = 0;(cloud9)
    for(int x=0;x<=K;x++){
        for(int y=0;y<=K;y++){
            int z = S-x-y;
            if(0 <= z && z <= K){
                ans += 1;
                //ans = ans+1;(cloud9)
            }
        }
    }
    printf("%d",ans);
}
