
bool check(){
    
}

int main(){

    int lo=, hi=;

    while(lo<=hi){
       
        int mid=(lo+hi)/2;
        
        if(check(mid)) hi=mid+1;

        else lo=mid-1;
    }
}