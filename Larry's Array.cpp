string larrysArray(vector<int> A) {
    int c=0;
for(int i=0;i<(int)A.size();i++){
    for(int j=i+1;j<(int)A.size();j++){
        if(A[i]>A[j])
            c++;
    }
}
    if(c&1)
        return "NO";
    else
        return "YES";

}
