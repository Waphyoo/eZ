string mixText(string a,string b){
    int i=0;
    string c;
    int L = a.size();
    int l = b.size();
    if(L==l){
    while(i<L){
        c=c+a[i]+b[i];
        i++;
    }
         return c;
    }else{
    return "E";
    
    
    }
   
}