#define z long long int 
int Solution::colorful(int A) {
    if(A == 0){
        return 0;
    }
    vector<int> v;
    z value = 1;
    while(A){
        v.insert(v.begin(), A%10);
        A = A/10;
    }
    
    unordered_map<z,z> m;
    
    for(int i = 0; i < v.size(); i++){
        value = 1;
        for(int j = i; j < v.size(); j++){
            value = value*v[j];
            if(m.find(value) != m.end()){
                return 0;    
            }
            m.insert({value, value});
        }
    }
    
    
    return 1;
}
