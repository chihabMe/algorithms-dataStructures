#include <stdio.h>
int nbCh(int n){
    int s = 0 ;
    while(n>0){
        
        s++;
        n/=10;
    }
    return s;
}
int Pow(int n , int p ){
    int s = 1 ;
    for(int i=1;i<=p;i++){
        s*=n;
    }
    return s;
}
int reverse(int x){

    int sum = 0 ;
    int k = Pow(10,nbCh(x)-1);
    while(x>0){
        sum+= (x%10)*k;
        k/=10;
        x/=10;
    }
    return sum;
}
int  main(int argc, char const *argv[])
{
    int x=231;
    int k = Pow(10,nbCh(x)-1);
    printf("%d\n",k);
printf("%d\n", reverse(231));

}
